#include<stdio.h>
int main(){
    int nbr;
    printf("Entrer un nombre de depart : ");
    scanf("%d",&nbr);
    float somme=0,i;
    for ( i = 1; i <= nbr; i++)
    {
        somme = somme + (1/i);
    }
    printf("La somme est : %.2f\n",somme);
    return 0;
}