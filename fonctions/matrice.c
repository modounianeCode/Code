#include<stdio.h>
void remplir(int tab[][],int n,int m);
int main(){
    int lm1,cm1,lm2,cm2;
    printf("Entrer le nombre de ligne de la 1ere matrice : ");
    scanf("%d",&lm1);
    printf("Entrer le nombre de colonne de la 1ere matrice : ");
    scanf("%d",&cm1); 
    printf("Entrer le nombre de ligne de la 2eme matrice : ");
    scanf("%d",&lm2); 
    printf("Entrer le nombre de colonne de la 1ere matrice : ");
    scanf("%d",&cm2);
    int mat1[lm1][cm1],mat2[lm2][cm2];
    puts("Remplissage du matrice 1 ");
    return 0;
}
void remplir(int tab[][],int n,int m){
    int i,j;
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < m; j++)
        {
            printf("mat[%d][%d]:",i,j);
            scanf("%d",&tab[i][j]);
        }
        
    }
    
}