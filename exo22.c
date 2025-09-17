#include<stdio.h>
int main(){
    int nbr;
    printf("Entrer un nombre : ");
    scanf("%d", &nbr);
    if(nbr % 2 == 0) {
        printf("Le nombre %d est pair.\n", nbr);
    } else {
        printf("Le nombre %d est impair.\n", nbr);
    }
    return 0;
}