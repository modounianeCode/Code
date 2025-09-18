#include<stdio.h>
int main(){
    int nbr,i;
    printf("Saisissez un nombre : ");
    scanf("%d", &nbr);
    printf("Les diviseurs de %d sont :\n",nbr);
    for (i = 1; i <= nbr;i++){
        if (nbr%i==0)
            printf("%d ", i);
        else
            continue;
    }
    puts("");
    return 0;
}