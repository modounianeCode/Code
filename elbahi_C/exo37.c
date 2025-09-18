#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int nbrentre,nbrmystere=0,cpt=0;
    int max=100,min=1;
    printf("Jeu du nombre mystère\n");
    srand(time(NULL));
    nbrmystere = (rand() % (max - min +1 )) + min;
    printf("Entrer un nombre compris entre 1 et 100\n");
    do
    {
        scanf("%d",&nbrentre);
        cpt++;
        if (nbrentre>nbrmystere)
        {   
            printf("Entrer un nombre plus petit\n");
        }else if (nbrentre<nbrmystere)
        {
            printf("Entrer un nombre plus grand\n");
        }else 
            printf("Bravo!!! vous avez trouve le nombre mystere %d en %d tentatives\n",nbrmystere,cpt);      
    } while (nbrentre!=nbrmystere);
    return 0;
}