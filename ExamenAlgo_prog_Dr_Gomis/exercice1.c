#include<stdio.h>
#include<stdlib.h>
void liberer(int *tab);
void afficher(int *tab,int size);
int *tab(int tableau1[], int Tableau2[], int taille);
int taille(int tableau1[], int Tableau2[], int taille);
void doublon(int tab_origine[],int *tab_compare,int size,int newsize);
int main(){
    int T1[] = {1,2,1,4,5,6};
    int T2[] = {1,9,8,2,3,6};
    int size = sizeof(T1)/sizeof(T1[0]);
    puts("Affichage du premier tableau");
    for (int i = 0; i < size; i++)
    {
        printf("%d |",T1[i]);
    }
    puts("");
    puts("Affichage du deuxieme tableau");
    for (int i = 0; i < size; i++)
    {
        printf("%d |",T2[i]);
    }
    puts("");
    int *tab_resultant = tab(T1,T2,size);
    int newsize = taille(T1,T2,size);
    afficher(tab_resultant,newsize);
    liberer(tab_resultant);
    return 0;
}
int *tab(int tableau1[], int Tableau2[], int taille){
    int cpt=0;
    int *t = (int*)malloc(taille*sizeof(int));
    for (int i = 0; i < taille; i++)
    {
        for (int j = 0; j < taille; j++)
        {
            if(tableau1[i] == Tableau2[j]){
                t[cpt] = tableau1[i];
                cpt++;
                break;
            }
        }
        
    }

    return t;
}
int taille(int tableau1[], int Tableau2[], int taille){
    int cpt=0;
    int *t = (int*)malloc(taille*sizeof(int));
    for (int i = 0; i < taille; i++)
    {
        for (int j = 0; j < taille; j++)
        {
            if(tableau1[i] == Tableau2[j]){
                t[cpt] = tableau1[i];
                cpt++;
                break;
            }
        }
        
    }
    return cpt;
}
void afficher(int *tab,int size){
    puts("Voici le troisieme tableau sans doublons");
    for (int i = 0; i < size; i++)
    {
        printf("%d |",tab[i]);
    }
    printf("\n");
}
void doublon(int tab_origine[],int *tab_compare,int size,int newsize){
    
}
void liberer(int *tab){
    free(tab);
}