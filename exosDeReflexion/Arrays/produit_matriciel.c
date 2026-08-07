#include <stdio.h>
#include <stdlib.h>

int *creerMatrice(int ligne, int colonne) {
    int *matrice = malloc((size_t)ligne * colonne * sizeof(int));
    if (matrice == NULL) {
        fprintf(stderr, "Erreur d'allocation memoire\n");
        exit(1);
    }
    return matrice;
}

int main(void) {
    int ligne1 = 2, colonne1 = 3;
    int ligne2 = 3, colonne2 = 2;

    int *mat1 = creerMatrice(ligne1, colonne1);
    int *mat2 = creerMatrice(ligne2, colonne2);
    int *resultat = creerMatrice(ligne1, colonne2);

    int valeurs1[] = {1, 2, 3, 4, 5, 6};
    int valeurs2[] = {7, 8, 9, 10, 11, 12};

    for (int i = 0; i < ligne1; i++) {
        for (int j = 0; j < colonne1; j++) {
            mat1[i * colonne1 + j] = valeurs1[i * colonne1 + j];
        }
    }

    for (int i = 0; i < ligne2; i++) {
        for (int j = 0; j < colonne2; j++) {
            mat2[i * colonne2 + j] = valeurs2[i * colonne2 + j];
        }
    }

    for (int i = 0; i < ligne1; i++) {
        for (int j = 0; j < colonne2; j++) {
            resultat[i * colonne2 + j] = 0;
            for (int k = 0; k < colonne1; k++) {
                resultat[i * colonne2 + j] += mat1[i * colonne1 + k] * mat2[k * colonne2 + j];
            }
        }
    }

    printf("Matrice 1:\n");
    for (int i = 0; i < ligne1; i++) {
        for (int j = 0; j < colonne1; j++) {
            printf("%d ", mat1[i * colonne1 + j]);
        }
        // printf("%d ", mat1[i]);
        puts("");
    }

    printf("\nMatrice 2:\n");
    for (int i = 0; i < ligne2; i++) {
        for (int j = 0; j < colonne2; j++) {
            printf("%d ", mat2[i * colonne2 + j]);
        }
        puts("");
    }

    printf("\nResultat:\n");
    for (int i = 0; i < ligne1; i++) {
        for (int j = 0; j < colonne2; j++) {
            printf("%d ", resultat[i * colonne2 + j]);
        }
        puts("");
    }

    free(mat1);
    free(mat2);
    free(resultat);

    return 0;
}