#include<stdio.h>
int sommeTableau(int tableau[], int tailleTableau);
double moyenneTableau(int tableau[], int tailleTableau);
void remplir(int tab[],int n);
void afficher(int tab[],int n);
int main(){
    int n;
    printf("Entrer la taille du tableau : ");
    scanf("%d",&n);
    int tab[n];
    remplir(tab,n);
    int appel;
    double moy;
    moy=moyenneTableau(tab,n);
    appel=sommeTableau(tab,n);
    puts("Affichage du tableau");
    afficher(tab,n);
    printf("La somme des elements du tableau est : %d\n",appel);
    printf("La moyenne des elements du tableau est : %f\n",moy);
    return 0;
}
void remplir(int tab[],int n){
    int i;
    puts("Remplissage du tableau");
    for ( i = 0; i < n; i++)
    {
        printf("tab[%d]:",i+1);
        scanf("%d",&tab[i]);
    }   
}
int sommeTableau(int tableau[], int tailleTableau){
    int somme=0,i;
    for ( i = 0; i < tailleTableau; i++)
    {
        somme+=tableau[i];
    }
    return somme; 
}
void afficher(int tab[],int n){
    int i;
    for ( i = 0; i < n ; i++)
    {
       printf("%d ",tab[i]);
    }
    puts("");  
}
double moyenneTableau(int tableau[], int tailleTableau){
   double moyenne;
   moyenne=(sommeTableau(tableau,tailleTableau)/tailleTableau);
   return moyenne;
}