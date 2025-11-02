#include<stdio.h>
int main(){
    float a, b;
    float *p1 = &a, *p2 = &b, somme, produit,difference,division;
    printf("Entrer un nombre reel : ");
    scanf("%f",p1);
    printf("Entrer un autre nombre reel : ");
    scanf("%f",p2);
    somme = *p1 + *p2;
    produit = (*p1) * (*p2);
    difference = (*p1) - (*p2);
    printf("La somme de %.2f et %.2f est : %.2f\n", *p1, *p2, somme);
    printf("Le produit de %.2f et %.2f est : %.2f\n", *p1, *p2, produit);
    printf("La difference de %.2f et %.2f est : %.2f\n", *p1, *p2, difference);
    if (*p2 == 0)
    {
        printf("Division par zero impossible\n");
    }
    else
    {
        division = (*p1) / (*p2);
        printf("La division de %.2f par %.2f est : %.2f\n", *p1, *p2, division);
    }
    
    return 0;
}