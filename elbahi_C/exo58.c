#include<stdio.h>
int main(){
    float somme=1000,c[20];
    int i;
    puts("L'evolution de la somme apres 20 ans est:");
    for ( i = 0; i < 20; i++)
    {
        somme+=(somme*0.02);
        c[i]=somme;
        printf("%d anniversaire = %.2f\n",i+1,c[i]);
    }
    return 0;
}