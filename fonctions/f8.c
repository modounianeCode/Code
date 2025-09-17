#include<stdio.h>
#include<stdlib.h>
int *resizee(int *n,int m);
int main(){
    int *pa;
    int count,i;
    printf("Entrer la taille du tableau : ");
    scanf("%d",&count);
    pa=malloc(count*sizeof(int));
    printf("Remplissage du tableau\n");
    for ( i = 0; i < count; i++)
    {
        printf("tab[%d]:",i+1);
        scanf("%d",(pa+i));
    }
    int m;
    printf("Entrer le nouveau taille du tableau : ");
    scanf("%d",&m);
    int *appel=resizee(pa,m);
    for ( i = 0 ; i < m ; i++)
    {
        printf("%d ",appel[i]);
    }
    puts("");
    return 0;
}
int *resizee(int *n,int m){
    n=realloc(n,m);
    printf("Remplissage\n");
    for (int i = 0; i < m; i++)
    {
       printf("tab[%d]:",i);
       scanf("%d",(n+i));
    }
    return n;
}