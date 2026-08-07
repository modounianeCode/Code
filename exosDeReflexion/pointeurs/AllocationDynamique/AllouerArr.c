#include<stdio.h>
#include<stdlib.h>
int arrayLength();
void allouerTab(int taille);
void remplir(int *tab,int taille);
void afficher(int *tab,int taille);
void liberer(int **tab);
int main(){
allouerTab(arrayLength());
return 0;
}
int arrayLength(){
int taille;
printf("Entrer la taille du tableau\n");
scanf("%d",&taille);
return taille;
}
void allouerTab(int taille){
int *tab = malloc(taille * sizeof(int));
if(tab == NULL){
puts("Erreur d'allocation");
return;
}
remplir(tab,taille);
afficher(tab,taille);
liberer(&tab);
}

void remplir(int *tab,int taille){

puts("Remplissage du tableau");

for(int i=0; i < taille; i++){
printf("EL %d: ",i+1);
scanf("%d",&tab[i]);
}
}


void afficher(int *tab,int taille){

puts("Affichage du tableau");

for(int i=0; i < taille; i++){
printf("%d |",tab[i]);
}
puts("");
}

void liberer(int **tab){
free(*tab);
*tab=NULL;//pour eviter le dangling pointer
}

