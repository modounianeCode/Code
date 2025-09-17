#include<stdio.h>
int main(){
    int i,j,count=10;
    printf("Affichage des tables de multiplication de 1 a 10 \n");
    for ( i = 0; i <= count; i++)
    {
        printf("table %d : ",i);

        for ( j = 0; j <= count; j++)
        {
            printf("%d\t",i*j);
        }
        puts("");
    }
    return 0;
}