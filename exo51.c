#include<stdio.h>
int main(){
float tab[10],somme=0,produit=1,moyenne;
int i;
puts("Remplissage du tableau de 10 reels");
for(i=0;i<10;i++){
printf("Entrer l'element %d : ",i+1);
scanf("%f",&tab[i]);
somme+=tab[i];
produit*=tab[i];
}
moyenne=somme/10;
puts("Voici les elements du tableau");
for(i=0;i<10;i++){
printf("%.3f ",tab[i]);
}
puts("");
printf("La somme des elements du tableau est : %f\n",somme);
printf("Le produit des elements du tableau est : %f\n",produit);
printf("La moyenne  des elements du tableau est : %f\n",moyenne);
return 0;
}
