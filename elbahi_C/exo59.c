#include<stdio.h>
int main(){
    int T[6],i;
    puts("Remplissage du tableau");
    for ( i = 0; i < 6; i++)
    {
        printf("T[%d]:",i+1);
        scanf("%d",&T[i]);
    }
    printf("Tableau initial\n");
    for ( i = 0; i < 6; i++)
    {
        printf("%d\t",T[i]);
    }
    printf("\nTableau inverse\n");
    for ( i = 5; i >= 0; i--)
    {
        printf("%d\t",T[i]);
    }
    puts("");
    return 0;
}