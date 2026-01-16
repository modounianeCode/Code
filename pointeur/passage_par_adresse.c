#include<stdio.h>
#include<stdlib.h>
void moitie(int *nombre){
    *nombre = *nombre / 2;
}
int main(){
    int nombre = 10;
    int *pointeur = &nombre;
    printf("Le nombre initial est : %d\n", nombre);
    moitie(pointeur);
    printf("La moitié du nombre est : %d\n", nombre);
    // Le changement a eu lieu car le passage est par adresse. on utilise directement l'adresse du nombre.
    return 0;
}