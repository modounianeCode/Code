#include<stdio.h>
int main(){
    // programme qui permet d'entrer les éléments d'un tableau et les afficher avec des pointeurs
    int tab[5];
    int i;
    puts("Entrez 5 entiers :");
    for(i=0;i<5;i++){
        printf("Element %d : ",i+1);
        scanf("%d",tab+i);
    }
    puts("Les éléments du tableau sont :");
    for(i=0;i<5;i++){
        printf("Element %d : %d\n",i+1,*(tab+i));
    }
    return 0;
}