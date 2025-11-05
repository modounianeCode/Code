#include<stdio.h>
#include<stdlib.h>
// complexite algorithmique de la recherche dichotomique
void rechercher(int taille,int tab[],int elt){
    int g = 0, d = taille - 1, m ;
    do
    {
        m = ( g + d ) / 2;
        printf("g=%d d=%d m=%d\n",g,d,m);
        if ( elt < tab[m])
        {
            d = m-1;
        }
        if( elt > tab[m])
        {
            g = m+1;
        }
    } while (tab[m]!= elt && g <= d);
    if ( tab[m] == elt)
    {
        printf("L'element existe dans le tableau et est a la position %d\n",m);
    }
    else
        printf("L'element n'existe pas dans le tableau\n");
}
int main(){
    int T[]={1,2,7,10,18,19};
    int n = sizeof(T)/sizeof(T[0]);
    int elt;
    printf("Entrer l'element a rechercher : ");
    scanf("%d",&elt);
    rechercher(n,T,elt);
    return 0;
}
/*
void maximum(int *a, int *b, int *c){
    if (*a > *b)
    {
        *c = *a;
    }
    else
        *c = *b;
}
int main(){
    int a, b, c;
    printf("Entrer un nombre entier : ");
    scanf("%d",&a);
    printf("Entrer un autre nombre entier : ");
    scanf("%d",&b);
    maximum(&a, &b, &c);
    printf("Le maximum est : %d\n", c);
    return 0;
}
    */