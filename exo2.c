#include<stdio.h>
int main(){
    float L,l;
    printf("Entrer la largeur du rectangle : ");
    scanf("%f",&l);
    printf("Entrer la Longeur du rectangle : ");
    scanf("%f",&L);
    printf("Rectangle : Longueur=%.2f et largeur=%.2f\n",L,l);
    printf("Le perimetre du rectangle est : %.2f\n",2*(l+L));
    printf("La surface du perimetre est : %.2f\n",l*L);
    puts("Fin du programme");
    return 0;
}