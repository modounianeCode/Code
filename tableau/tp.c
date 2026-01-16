#include<stdio.h>
int sommeTableau(int tableau[], int tailleTableau){
    int somme = 0;
    for(int i = 0; i < tailleTableau; i++){
        somme += tableau[i];
    }
    return somme;
}
double moyenneTableau(int tableau[], int tailleTableau){
    int somme = sommeTableau(tableau, tailleTableau);
    double moyenne = (double)somme / tailleTableau;
    return moyenne;
}
int main(){
    int tab [] = {10,20,30,40,50};
    int size = sizeof(tab)/sizeof(tab[0]);
    int somme = sommeTableau(tab, size);
    double moyenne = moyenneTableau(tab, size);
    printf("La somme des elements du tableau est: %d\n", somme);
    printf("La moyenne des elements du tableau est: %.2f\n", moyenne);
    return 0;
}