#include<stdio.h>
#include<stdlib.h>
void display(float tableau[],int count);
float sommeTableau(float tableau[], int count);
float moyenneTableau(float tableau[], int count);
void copie(float tableauOriginal[], float tableauCopie[], int
count);
void maximumTableau(float tableau[], int count, float
valeurMax);
void ordonnerTableau(float tableau[], int tailleTableau);
int main(){
    float notes[]={10,7,10.5,17.5,4.5,16,9.5};
    int tailleDuTableau=sizeof(notes)/sizeof(notes[0]);
    float notesCopie[tailleDuTableau];
    float somme=sommeTableau(notes,tailleDuTableau);
    float moyenne=moyenneTableau(notes,tailleDuTableau);
    copie(notes,notesCopie,tailleDuTableau);
    maximumTableau(notes,tailleDuTableau,moyenne);
    ordonnerTableau(notes,tailleDuTableau);
    return 0;
}
float sommeTableau(float tableau[], int count){
    int i;
    float somme=0;
    for ( i = 0; i < count; i++)
    {
        somme+=tableau[i];
    }
    return somme;
}
float moyenneTableau(float tableau[], int count){
    float somme=sommeTableau(tableau,count);
    float moyenne = somme/count;
    return moyenne;
}
void copie(float tableauOriginal[], float tableauCopie[], int
count){
    int i;
    for ( i = 0; i < count; i++)
    {
        tableauCopie[i]=tableauOriginal[i];
    }
    display(tableauCopie,count);
}
void maximumTableau(float tableau[], int count, float
valeurMax){
    int i;
    for ( i = 0; i < count; i++)
    {
        if (tableau[i]>valeurMax)
        {
            tableau[i]=0;
        }
        
    }
    display(tableau,count);
}
void display(float tableau[],int count){
    int i;
    puts("Affichage du tableau");
    for ( i = 0; i < count; i++)
    {
        printf("%f |",tableau[i]);
    }
    puts("");
}
void ordonnerTableau(float tableau[], int tailleTableau){
    int i,j;
    float c;
    for ( i = 0; i < tailleTableau; i++)
    {
        for ( j = i+1; j < tailleTableau; j++)
        {
            if(tableau[i]>tableau[j]){
            c=tableau[j];
            tableau[j]=tableau[i];
            tableau[i]=c;
            }
        }
        
    }
    display(tableau,tailleTableau);
    
}