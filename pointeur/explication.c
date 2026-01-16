#include<stdio.h>
#include<stdlib.h>
int main(){
    int nombre = 10;
    printf("Le nombre est: %d\n", nombre);
    printf("L'adresse du nombre est : %p\n",&nombre);
    int *pointeur = &nombre;
    printf("La valeur pointée par le pointeur est : %d\n", *pointeur);
    printf("L'adresse stockée dans le pointeur est : %p\n", pointeur);
    return 0;
}