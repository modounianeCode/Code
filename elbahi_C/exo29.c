#include<stdio.h>
#include<math.h>
int main(){
    int n,somme=0,i;
    printf("Entrer un entier : ");
    scanf("%d",&n);
    for ( i = 1; i <= 2*n; i++)
    {
        if (i%2==0)
        {
            continue;
        }
        else
            somme+=pow(i,2);
    }
    printf("La somme des carres des %d premiers nombres impairs  est : %d\n",n,somme);
    return 0;
}