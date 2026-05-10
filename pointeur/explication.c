#include<stdio.h>
int main(){
    int nombre = 1;
    int *pointeur = &nombre;
    *pointeur=nombre+10;
    printf("Le nombre est: %d\n", nombre);
    printf("L'adresse du nombre est : %p\n",&nombre);
    printf("Le pointeur pointe vers la valeur %d\n", *pointeur);
    printf("L'adresse stockée dans le pointeur est : %p\n", pointeur);
    return 0;
}