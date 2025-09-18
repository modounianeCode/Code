#include<stdio.h>
int main(){
    int nbr,fact=1;
    printf("Entrer un nombre : ");
    scanf("%d",&nbr);
    if(nbr>0){
    for (int i = 1; i <= nbr; i++)
    {
        fact*=i;
    }
    puts("Dans cet exercice on calcul le factoriel d'un nombre");
    printf("%d!=%d\n",nbr,fact);
    }else if (nbr==0)
    {
        puts("0!=1");
    }
    else
        printf("Vous devez entrer un nombre positif\n");
        puts("Au revoir");
    return 0;
}