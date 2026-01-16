#include<stdio.h>
#include<stdlib.h>
void moitie(int nombre){
    nombre = nombre / 2;
}
int main(){
    int nombre = 10;
    printf("Le nombre initial est : %d\n", nombre);
    moitie(nombre);
    printf("La moitié du nombre est : %d\n", nombre);
    // le changement n'a pas eu lieu car le passage est par valeur.
    return 0;
}