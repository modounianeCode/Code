#include<stdio.h>
#include<stdlib.h>
void copie(int tableauOriginal[], int tableauCopie[], int
tailleTableau);
int main(){
    int n;
    printf("Entrer la taille des 2 tableau : ");
    scanf("%d",&n);
    int t1[n],t2[n];
    int i;
    puts("Remplissage du 1er tableau");
    for ( i = 0; i < n; i++)
    {
        printf("t1[%d]:",i+1);
        scanf("%d",&t1[i]);
    }
    puts("Tableau original");
    for ( i = 0; i < n; i++)
    {
        printf("%d ",t1[i]);
    }
    puts("");
    copie(t1,t2,n);
    return 0;
}
void copie(int tableauOriginal[], int tableauCopie[], int
tailleTableau){
    int i;
    for ( i = 0; i < tailleTableau; i++)
    {
        tableauCopie[i]=tableauOriginal[i];
    }
    puts("Tableau copie");
    for ( i = 0; i < tailleTableau; i++)
    {
        printf("%d ",tableauCopie[i]);
    }
    puts("");
}