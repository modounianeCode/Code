#include<stdio.h>
#include<stdlib.h>
void remplir(int *tab,int taille){
    puts("Remplir le tableau");
    for (int i = 0; i < taille; i++)
    {
        printf("Element %d : ",i+1);
        scanf("%d",(tab+i));
    }
}
int* array_sans_doublons(int *tab,int *count){
    
}
int main(){
    puts("Programme qui nous permet de remplir un tableau contenant des doublons et apres supprimer les doublons");
    printf("Entrer la taille du tableau : ");
    int size;
    scanf("%d",&size);
    int *tab;
    tab=(int *)malloc(size*sizeof(int));
    remplir(tab,size);
    return 0;
}