#include<stdio.h>
#include<stdlib.h>
int main(){
    int l=4,c=2;
    int **tab;
    tab=(int **)malloc(sizeof(int*) * l);
    for (int i = 0; i < l; i++)
    {
        tab[i]=(int*)malloc(sizeof(int) * c);
    }
    for (int i = 0; i < l; i++)
    {
        for(int j=0;j<c;j++){
            printf("tab[%d][%d]: ",i,j);
            scanf("%d",&tab[i][j]);
        }
    }   
    int **p = tab;
    for(p = tab;p < (tab+l);p++){
        for(int *ptr = tab[p-tab];ptr < (tab[p-tab]+c);ptr++){
            printf("%d|",*ptr);
        }
        printf("\n");
    }
    for (int i = 0; i < l; i++)
    {
        free(tab[i]);
    }
    free(tab);
    return 0;
}