#include<stdio.h>
int main(){
    //programme qui affiche les diviseurs d'un nombre entier
    int nbr, *p = &nbr;
    printf("Entrer un nombre entier : ");
    scanf("%d",p);
    printf("Les diviseurs de %d sont : ",*p);
    for (int i = 1; i <= *p; i++)
    {
        if (*p % i == 0)
        {
            printf("%d ",i);
        }
    }
    puts("");
    return 0;
}