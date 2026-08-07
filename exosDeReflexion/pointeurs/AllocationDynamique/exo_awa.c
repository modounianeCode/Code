#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,i,m;
    char reponse;
    printf("Donner la taille du tableau: ");
    scanf("%d",&n);
    int total = n;
    int *t = (int*)malloc(sizeof(int) * n);
    for ( i = 0; i < n; i++)
    {
        printf("t[%d]: ",i);
        scanf("%d",&t[i]);
    }
    do
    {
        printf("Voulez-vous ajouter des éléments? ");
        scanf(" %c",&reponse);
    } while (reponse != 'o' && reponse != 'n');
    while (reponse == 'o')
    {
        printf("Donner la nouvelle taille: ");
        scanf("%d",&m);
        t = realloc(t,sizeof(int) * m);
        total +=m;
        printf("total: %d\n",total);
        for ( i = n; i < total ; i++)
        {
            printf("t[%d]: ",i);
            scanf("%d",&t[i]);
        }
        n=n+m;
        do
        {
            printf("Voulez vous continuer? ");
            scanf(" %c",&reponse);
        } while (reponse != 'o' && reponse != 'n');
        if(reponse == 'n') break;
    }
    for ( i = 0; i < total; i++)
    {
        printf("%d|",t[i]);
    }
    printf("\n");
    return 0;
}

