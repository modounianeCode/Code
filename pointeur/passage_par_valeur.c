#include<stdio.h>
void moitie(int nombre){
    nombre = nombre / 2;
    printf("%d\n",nombre);
}
int main(){
    int nombre = 10;
    printf("Le nombre initial est : %d\n", nombre);
    moitie(nombre);
    printf("La moitié du nombre est : %d\n", nombre);
    // le changement n'a pas eu lieu car le passage est par valeur.
    return 0;
}