#include<stdio.h>
int main(){
    int a,b;
    printf("Saisissez deux entiers : ");
    scanf("%d %d", &a, &b);
    if (a*b > 0)
    {
        printf("le produit est : %d\n", a*b);
        printf("%d et %d ont le même signe.\n", a, b);
    }
    else if (a*b < 0)
    {
        printf("le produit est : %d\n", a*b);
        printf("%d et %d ont des signes différents.\n", a, b);
    }
    else
    {
        printf("le produit est : 0\n");
        printf("%d et %d sont nuls ou l'un d'eux est nul.\n", a, b);
    } 
    return 0;
}