#include<stdio.h>
double facct(int n){
    if(n==0){
        return 1;
    }else{
        return n*facct(n-1);
    }
}
int main(){
    int nbr,fact=1;
    printf("Entrer un nombre : ");
    scanf("%d",&nbr);
    if(nbr<0){
        printf("Vous devez entrer un nombre positif\n");
        puts("Au revoir");
    }else{
        printf("Dans cet exercice on calcul le factoriel d'un nombre\n");
        printf("%d! = %.0f\n",nbr,facct(nbr));
    }
    /*if(nbr>0){
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
    */
    return 0;
}