#include<stdio.h>
#include "exercice1.h"
int main(){
    int nombre;
    printf("Entrez un nombre entier : ");
    scanf("%d", &nombre);
    modifier(&nombre);
    printf("Le nombre modifié est : %d\n", nombre);
    return 0;
}