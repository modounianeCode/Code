#include<stdio.h>
int main(){
    puts("Ceci est un programme permettant d'améliorer mon problem solving");
    int tab[5][5];
    int count=sizeof(tab[0])/sizeof(tab[0][0]);
    int i,j;
    // printf("%d",count);
    for ( i = 0; i < count; i++)
    {
        for ( j = 0; j < count; j++)
        {
            if (i==j || (i+j)%2==0)
            {
                tab[i][j] = i+j;
            }
            else{
                tab[i][j]=0;
            } 
        }
        
    }
    puts("============= Affichage du tab2D =============");
     for ( i = 0; i < count; i++)
    {
        for ( j = 0; j < count; j++)
        {
            printf("%d ",tab[i][j]);
        }
        puts("");
    }
    puts("===============================================");
    return 0;
}