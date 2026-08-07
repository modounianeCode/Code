#include <stdio.h>
#include <stdlib.h>

int main() {

    /* ── 1. Allocation initiale : tableau de 3 entiers ── */
    int taille = 3;
    int *tab = malloc(taille * sizeof(int));
    if (tab == NULL) {
        puts("Erreur allocation initiale");
        return 1;
    }

    tab[0] = 10;
    tab[1] = 20;
    tab[2] = 30;

    printf("Avant realloc : %d cases\n", taille);
    for (int i = 0; i < taille; i++)
        printf("  tab[%d] = %d\n", i, tab[i]);

    /* ── 2. Agrandissement : on veut 6 entiers ── */
    int nouvelle_taille = 6;

    /*  ❌ NE PAS FAIRE :
        tab = realloc(tab, nouvelle_taille * sizeof(int));
        Si realloc échoue → tab = NULL → ancien bloc perdu → fuite mémoire  */

    /*  ✅ BONNE PRATIQUE : pointeur temporaire  */
    int *tmp = realloc(tab, nouvelle_taille * sizeof(int));

    if (tmp == NULL) {
        /* realloc a échoué.
           tab pointe ENCORE vers l'ancien bloc intact.
           On peut l'utiliser, l'afficher, le libérer proprement. */
        puts("Echec du realloc — ancien tableau conservé");
        free(tab);       /* ✅ on libère proprement l'ancien bloc */
        tab = NULL;
        return 1;
    }

    /* realloc a réussi : tmp pointe vers le nouveau bloc
       (peut être la même adresse ou une nouvelle — on ne sait pas).
       On transfère à tab. */
    tab = tmp;
    taille = nouvelle_taille;

    /* Les 3 premières valeurs sont preservées automatiquement */
    tab[3] = 40;
    tab[4] = 50;
    tab[5] = 60;

    printf("\nApres realloc : %d cases\n", taille);
    for (int i = 0; i < taille; i++)
        printf("  tab[%d] = %d\n", i, tab[i]);
    
    free(tab);
    tab = NULL;
    return 0;
}
