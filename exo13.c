#include<stdio.h>
int main(){
    int a,b,somme, produit;
    printf("Saisissez deux entiers : ");
    scanf("%d %d", &a, &b);
    int c;
    if (a*b > 0)
    {
        c=a;
        a=b;
        b=c;
    }
    else {
        somme =a+b;
        produit = a*b;
        a=somme;
        b=produit;
    }
    printf("La nouvelle valeur de a est : %d\n", a);
    printf("La nouvelle valeur de b est : %d\n", b);
    return 0;
}