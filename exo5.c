#include<stdio.h>
int main(){
   int taille;
   printf("Entrer la taille du tableau : ");
   scanf("%d",&taille);
   if (taille <= 0) 
   {
       printf("La taille du tableau doit etre positive.\n");
       printf("et par consequent la moynne ne peut pas etre calculee\n");
   }
   else{
   float tab[taille];
   int i;
   float somme = 0.0,moyenne;
   for ( i = 0; i < taille; i++)
   {
        printf("Entrer la note %d : ", i + 1);
        scanf("%f", &tab[i]);
        somme += tab[i];
   }
   moyenne = somme / taille;
   printf("La somme des notes est : %.2f\n", somme);
   printf("La moyenne des notes est : %.2f\n", moyenne);
}
    return 0;
}