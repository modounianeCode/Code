#include<stdio.h>
void maximumTableau(int tableau[], int tailleTableau, int valeurMax,int indice);
void remplir(int tab[],int n);
int main(){
    int n,indice;
    printf("Entrer la taille du tableau : ");
    scanf("%d",&n);
    int tab[n];
    remplir(tab,n);
    int max=tab[0],i;
    for ( i = 1; i < n; i++)
    {
        if (max<tab[i])
        {
            max=tab[i];
            indice=i;
        }  
    }
    maximumTableau(tab,n,max,indice);
    return 0;
}
void remplir(int tab[],int n){
    int i;
    puts("Remplissage du tableau");
    for ( i = 0; i < n; i++)
    {
        printf("tab[%d]:",i+1);
        scanf("%d",&tab[i]);
    }   
}
void maximumTableau(int tableau[], int tailleTableau, int valeurMax,int indice){
    int i;
    for ( i = indice; i < tailleTableau; i++)
    {
        tableau[i]=0;
    }
    indice=tailleTableau;
    puts("Affichage du tableau");
   for ( i = 0; i < tailleTableau; i++)
   {
        printf("%d ",tableau[i]);
   }
    
}