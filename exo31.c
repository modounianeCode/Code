#include<stdio.h>
int main(){
    int n,somme=0,i;
    printf("Vous etes a combien d'anniversaires ? ");
    scanf("%d", &n);
    for ( i = 1; i <= n; i++)
    {
        somme += 500+(3*i);
    }
    printf("Puisque vous etes a votre %d anniversaire, vous avez %d fcfa.\n", n, somme);
    return 0;
}