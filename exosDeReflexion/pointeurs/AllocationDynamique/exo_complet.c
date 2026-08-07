#include <stdio.h>
#include <stdlib.h>

/* ═══════════════════════════════════════════════════════════════
   PROTOTYPES
═══════════════════════════════════════════════════════════════ */
void exercice5_realloc();
void exercice6_fuite_memoire_cassee();
void exercice6_fuite_memoire_corrigee();
void exercice6_double_free_casse();
void exercice6_double_free_corrige();
void exercice6_apres_free_casse();
void exercice6_apres_free_corrige();

/* ═══════════════════════════════════════════════════════════════
   MAIN — menu pour choisir quelle démonstration lancer
═══════════════════════════════════════════════════════════════ */
int main() {
    int choix;

    puts("===========================================");
    puts("  EXERCICES 5 ET 6 — Allocation dynamique");
    puts("===========================================");
    puts("1. Exercice 5  : realloc sans perdre le pointeur");
    puts("-------------------------------------------");
    puts("2. Exercice 6a : fuite memoire    [CASSÉ]");
    puts("3. Exercice 6a : fuite memoire    [CORRIGÉ]");
    puts("4. Exercice 6b : double free      [CASSÉ]");
    puts("5. Exercice 6b : double free      [CORRIGÉ]");
    puts("6. Exercice 6c : utilisation apres free [CASSÉ]");
    puts("7. Exercice 6c : utilisation apres free [CORRIGÉ]");
    puts("===========================================");
    printf("Votre choix : ");
    scanf("%d", &choix);

    switch (choix) {
        case 1: exercice5_realloc();                  break;
        case 2: exercice6_fuite_memoire_cassee();     break;
        case 3: exercice6_fuite_memoire_corrigee();   break;
        case 4: exercice6_double_free_casse();        break;
        case 5: exercice6_double_free_corrige();      break;
        case 6: exercice6_apres_free_casse();         break;
        case 7: exercice6_apres_free_corrige();       break;
        default: puts("Choix invalide.");
    }

    return 0;
}

/* ═══════════════════════════════════════════════════════════════
   EXERCICE 5 — realloc avec gestion correcte de l'échec
═══════════════════════════════════════════════════════════════ */
void exercice5_realloc() {
    puts("\n--- EXERCICE 5 : realloc ---");

    /* ── Allocation initiale : 3 entiers ── */
    int taille = 3;
    int *tab = malloc(taille * sizeof(int));
    if (tab == NULL) {
        puts("Erreur : allocation initiale echouee.");
        return;
    }

    tab[0] = 10;
    tab[1] = 20;
    tab[2] = 30;

    printf("Avant realloc (%d cases) :\n", taille);
    for (int i = 0; i < taille; i++)
        printf("  tab[%d] = %d\n", i, tab[i]);

    /* ── Agrandissement : 3 → 6 entiers ── */
    int nouvelle_taille = 6;

    /*
     * MAUVAISE PRATIQUE (ne pas faire) :
     *   tab = realloc(tab, nouvelle_taille * sizeof(int));
     *   Si realloc échoue → tab = NULL → ancien bloc perdu → fuite mémoire.
     *
     * BONNE PRATIQUE : pointeur temporaire tmp.
     */
    int *tmp = realloc(tab, nouvelle_taille * sizeof(int));

    if (tmp == NULL) {
        /*
         * realloc a échoué.
         * tab pointe ENCORE vers l'ancien bloc intact.
         * On peut le libérer proprement sans fuite.
         */
        puts("Echec du realloc — ancien tableau conserve et libere proprement.");
        free(tab);
        tab = NULL;
        return;
    }

    /*
     * realloc a réussi.
     * tmp pointe vers le nouveau bloc (même adresse ou nouvelle).
     * Les 3 premières valeurs sont copiées automatiquement.
     * On transfère à tab.
     */
    tab = tmp;
    tmp = NULL;         /* tmp ne sert plus, on le neutralise */
    taille = nouvelle_taille;

    /* Remplissage des nouvelles cases */
    tab[3] = 40;
    tab[4] = 50;
    tab[5] = 60;

    printf("\nApres realloc (%d cases) :\n", taille);
    for (int i = 0; i < taille; i++)
        printf("  tab[%d] = %d\n", i, tab[i]);

    free(tab);
    tab = NULL;
    puts("Tableau libere proprement.");
}

/* ═══════════════════════════════════════════════════════════════
   EXERCICE 6a — FUITE MÉMOIRE
═══════════════════════════════════════════════════════════════ */

/*
 * VERSION CASSÉE
 * Le bloc alloué par malloc n'est jamais libéré.
 * tab (variable locale) disparaît à la fin de la fonction.
 * Le bloc sur le tas reste réservé : personne ne peut plus le libérer.
 * Valgrind affichera : "definitely lost: 20 bytes in 1 blocks"
 */
void exercice6_fuite_memoire_cassee() {
    puts("\n--- EXERCICE 6a : fuite memoire [CASSÉ] ---");

    int *tab = malloc(5 * sizeof(int));
    if (tab == NULL) {
        puts("Erreur d'allocation.");
        return;
    }

    for (int i = 0; i < 5; i++)
        tab[i] = i * 10;

    puts("Tableau rempli. On quitte SANS free -> fuite memoire.");
    /* ❌ free(tab) oublié */
}

/*
 * VERSION CORRIGÉE
 * On libère le bloc avant de quitter la fonction.
 */
void exercice6_fuite_memoire_corrigee() {
    puts("\n--- EXERCICE 6a : fuite memoire [CORRIGÉ] ---");

    int *tab = malloc(5 * sizeof(int));
    if (tab == NULL) {
        puts("Erreur d'allocation.");
        return;
    }

    for (int i = 0; i < 5; i++)
        tab[i] = i * 10;

    puts("Tableau rempli.");

    free(tab);      /* ✅ libération avant la fin de la fonction */
    tab = NULL;     /* ✅ protection anti-dangling pointer       */
    puts("Tableau libere proprement — aucune fuite.");
}

/* ═══════════════════════════════════════════════════════════════
   EXERCICE 6b — DOUBLE FREE
═══════════════════════════════════════════════════════════════ */

/*
 * VERSION CASSÉE
 * On appelle free deux fois sur le même pointeur.
 * La 2e fois : comportement indéfini.
 * Valgrind affichera : "Invalid free() / delete / delete[]"
 * En pratique : plantage, corruption silencieuse, ou "rien" par chance.
 */
void exercice6_double_free_casse() {
    puts("\n--- EXERCICE 6b : double free [CASSÉ] ---");

    int *p = malloc(sizeof(int));
    if (p == NULL) {
        puts("Erreur d'allocation.");
        return;
    }

    *p = 42;
    printf("Valeur avant free : %d\n", *p);

    free(p);                   /* 1er free : correct         */
    puts("1er free : OK");
    free(p);                   /* ❌ 2e free : COMPORTEMENT INDÉFINI */
    puts("2e free : comportement indefini !");
}

/*
 * VERSION CORRIGÉE
 * Après le free, on remet p à NULL.
 * free(NULL) est légal en C et ne fait strictement rien.
 * Le 2e free devient inoffensif.
 */
void exercice6_double_free_corrige() {
    puts("\n--- EXERCICE 6b : double free [CORRIGÉ] ---");

    int *p = malloc(sizeof(int));
    if (p == NULL) {
        puts("Erreur d'allocation.");
        return;
    }

    *p = 42;
    printf("Valeur avant free : %d\n", *p);

    free(p);
    p = NULL;    /* ✅ p = NULL : free(NULL) est sans effet    */
    puts("1er free : OK");

    free(p);     /* ✅ free(NULL) → ne fait rien, aucun risque */
    puts("2e free sur NULL : inoffensif.");
}

/* ═══════════════════════════════════════════════════════════════
   EXERCICE 6c — UTILISATION APRÈS FREE
═══════════════════════════════════════════════════════════════ */

/*
 * VERSION CASSÉE
 * On lit et écrit dans un bloc déjà libéré.
 * La zone ne nous appartient plus.
 * Peut afficher la bonne valeur (par chance), n'importe quoi,
 * ou provoquer un plantage. Comportement indéfini.
 * Valgrind affichera : "Invalid read/write of size 4"
 */
void exercice6_apres_free_casse() {
    puts("\n--- EXERCICE 6c : utilisation apres free [CASSÉ] ---");

    int *p = malloc(sizeof(int));
    if (p == NULL) {
        puts("Erreur d'allocation.");
        return;
    }

    *p = 99;
    printf("Valeur avant free : %d\n", *p);

    free(p);
    p=NULL; /* ✅ on neutralise le pointeur pour éviter le dangling pointer */
    /* ❌ p est maintenant un dangling pointer */

    printf("Lecture apres free : %d\n", *p); /* ❌ lecture invalide  */
    *p = 100;                                 /* ❌ écriture invalide */
    printf("Ecriture apres free : %d\n", *p);
}

/*
 * VERSION CORRIGÉE
 * On utilise la valeur AVANT de libérer.
 * Après free, p = NULL : tout déréférencement accidentel
 * plantera proprement (segfault sur NULL) au lieu de
 * corrompre silencieusement la mémoire.
 */
void exercice6_apres_free_corrige() {
    puts("\n--- EXERCICE 6c : utilisation apres free [CORRIGÉ] ---");

    int *p = malloc(sizeof(int));
    if (p == NULL) {
        puts("Erreur d'allocation.");
        return;
    }

    *p = 99;
    printf("Valeur : %d\n", *p); /* ✅ on utilise AVANT free */

    free(p);
    p = NULL; /* ✅ tout accès ultérieur plantera proprement  */

    /*
     * Si on essaie maintenant : printf("%d\n", *p);
     * → segfault immédiat et identifiable,
     *   au lieu d'un bug silencieux des heures plus tard.
     */
    puts("p remis a NULL — dangling pointer neutralise.");
}
