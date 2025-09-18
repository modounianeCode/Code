#include<stdio.h>
#include<math.h>
int main(){
    int nbr;
    printf("Entrer l'exposant ou on doit s'arreter : ");
    scanf("%d",&nbr);
    float somme,i;
    for ( i = 0; i <= nbr; i++)
    {
        somme+=pow(10,i);
    }
    printf("La somme est : %.2f\n",somme);
    return 0;
}