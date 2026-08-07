#include<stdio.h>
#include<stdlib.h>

// Allocation d'une matrice en bloc continu (meilleure performance)
int* allouer_matrice_continu(int ligne, int colonne){
    return (int*)malloc(ligne * colonne * sizeof(int));
}

// Accès aux éléments : mat[i*colonne + j]
int* additionnerMatrices(int ligne, int colonne, int *mat1, int *mat2){
    int *somme = allouer_matrice_continu(ligne, colonne);
    for (int i = 0; i < ligne * colonne; i++)
    {
        somme[i] = mat1[i] + mat2[i];
    }
    return somme;
}

void remplirMatrice(int nLigne, int nColonne, int *tab){
    puts("Remplir la matrice");
    for (int i = 0; i < nLigne; i++)
    {
        for (int j = 0; j < nColonne; j++)
        {
            printf("Mat[%d][%d]: ", i, j);
            scanf("%d", &tab[i * nColonne + j]);
        }
    }
}

void afficherMatrice(int nLigne, int nColonne, int *tab){
    puts("Afficher la matrice");
    for (int i = 0; i < nLigne; i++)
    {
        for (int j = 0; j < nColonne; j++)
        {
            printf("%d|", tab[i * nColonne + j]);
        }
        puts("");
    }
}

int main(){
    int matLigne, matColonne;
    printf("Entrer le nombre de Ligne de chaque matrice : ");
    scanf("%d", &matLigne);
    printf("Entrer le nombre de colonnes de chaque matrice : ");
    scanf("%d", &matColonne);
    
    int *matUne = allouer_matrice_continu(matLigne, matColonne);
    int *matDeux = allouer_matrice_continu(matLigne, matColonne);
    
    remplirMatrice(matLigne, matColonne, matUne);
    afficherMatrice(matLigne, matColonne, matUne);
    
    remplirMatrice(matLigne, matColonne, matDeux);
    afficherMatrice(matLigne, matColonne, matDeux);
    
    int *somme = additionnerMatrices(matLigne, matColonne, matUne, matDeux);
    puts("\nRésultat de l'addition :");
    afficherMatrice(matLigne, matColonne, somme);
    
    // Libérer la mémoire
    free(matUne);
    free(matDeux);
    free(somme);
    matUne=NULL;
    matDeux=NULL;
    somme=NULL;
    return 0;
}
