#include<stdio.h>
int main(){
    int n,u=6,i;
    printf("Entrer un entier : ");
    scanf("%d",&n);
    for (int i= 1; i <= n; i++)
    {
       u = 4 * u + 10;
    }
    printf("U%d=%d\n",n,u);
    return 0;
}