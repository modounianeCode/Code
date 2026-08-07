#include<stdio.h>
#include<stdlib.h>
int** allouer_dynamiquement(int ligne,int colonne){
    int **tab;
    tab = malloc(ligne * sizeof(int*));
    for (int i = 0; i < ligne; i++)
    {
        tab[i] = malloc(colonne * sizeof(int));
    }
    return tab;
}
int **additionnerMatrices(int ligne,int colonne,int mat1[][colonne],int mat2[][colonne]){
    int **somme = allouer_dynamiquement(ligne,colonne);
    for (int i = 0; i < ligne; i++)
    {
        for (int j = 0; j < colonne; j++)
        {
            somme[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    return somme;
}

void remplirMatrice(int nLigne,int nColonne,int tab[][nColonne]){
    puts("Remplir la matrice");
    for (int i = 0; i < nLigne; i++)
    {
        for (int j = 0; j < nColonne; j++)
        {
            printf("Mat[%d][%d]: ",i,j);
            scanf("%d",*(tab+i)+j);
        }
        
    }
    
}
void afficherMatrice(int nLigne, int nColonne, int tab[nLigne][nColonne]){
    puts("Afficher la matrice");
    for (int i = 0; i < nLigne; i++)
    {
        for (int j = 0; j < nColonne; j++)
        {
            printf("%d|",tab[i][j]);
        }
        puts("");
    }
    
}

void afficherMatriceDyn(int nLigne, int nColonne, int **tab){
    puts("Afficher la matrice somme");
    for (int i = 0; i < nLigne; i++)
    {
        for (int j = 0; j < nColonne; j++)
        {
            printf("%d|",tab[i][j]);
        }
        puts("");
    }
    
}
int main(){
    int t[]={1,22,3,14,54,6,7,8,9};
    int *p = &t[2];
    (*p)++;// // incrementer la valeur pointée par p et ensuite incrementer pincrementer la valeur pointée par p
    printf("%d\n",*p);
    (*p++);
    printf("%d\n",*p);
    *(p++);// incrementer p et ensuite dereferencer la valeur pointée par p
    printf("%d\n",*p);
    // int matLigne,matColonne;
    // printf("Entrer le nombre de Ligne de chaque matrice : ");
    // scanf("%d",&matLigne);
    // printf("Entrer le nombre de colonnes de chaque matrice : ");
    // scanf("%d",&matColonne);
    // int matUne[matLigne][matColonne];
    // int matDeux[matLigne][matColonne];
    // remplirMatrice(matLigne,matColonne,matUne);
    // afficherMatrice(matLigne,matColonne,matUne);
    // remplirMatrice(matLigne,matColonne,matDeux);
    // afficherMatrice(matLigne,matColonne,matDeux);
    // // int (*ptr)[matColonne]=&matUne[1];
    // // for(int i=0;i<matColonne;i++){
    // //     printf("%d|",*(*ptr+i));
    // // }
    // int **somme = additionnerMatrices(matLigne,matColonne,matUne,matDeux);
    // afficherMatriceDyn(matLigne,matColonne,somme);
    
    // // Libérer la mémoire
    // for (int i = 0; i < matLigne; i++){
    //     free(somme[i]);
    //     somme[i] = NULL;
    // }
    // free(somme);
    // somme=NULL;
    return 0;
}