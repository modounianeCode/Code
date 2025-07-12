#include<stdio.h>
int main(){
   int R1, R2, R3;
   float Rparal, Rserie;
    printf("Saisissez les valeurs de R1, R2 et R3 : ");
    scanf("%d %d %d", &R1, &R2, &R3);
    Rparal = 1.0 / (1.0 / R1 + 1.0 / R2 + 1.0 / R3);
    Rserie = R1 + R2 + R3;
    printf("Rparal = %.2f\n", Rparal);
    printf("Rserie = %.2f\n", Rserie);
    return 0;
}