#include<stdio.h>
int main(){
    int T[5],n,cpt,i=0;
    puts("Remplissage du tableau");
    for(cpt=0;cpt<5;cpt++){
        printf("Entrer T[%d]:",cpt+1);
        scanf("%d",&T[cpt]);
    }
    printf("Entrer un entier: ");
    scanf("%d",&n);
    for ( cpt = 0; cpt < 5; cpt++)
    {
        if (n==T[cpt])
        {
            i++;
        }   
    }
    if (i==0)
    {
        printf("%d ne se trouve pas dans le tableau\n",n);
    }
    else
    {
        printf("%d se trouve dans le tableau et son nombre d'occurences est %d\n",n,i);
    }
    puts("Fin du programme");
    return 0;
}