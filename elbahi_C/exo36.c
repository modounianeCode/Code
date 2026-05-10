#include<stdio.h>
int main(){
    int i,j;
    printf("Affichage des tables de multiplication de 1 a 10 \n");
    for ( i = 0; i <= 10; i++)
    {
        printf("table %d : ",i);

        for ( j = 0; j <= 10; j++)
        {
            printf("%d\t",i*j);
        }
        puts("");
    }
    return 0;
}