#include<stdio.h>
// int main(){
//     int A[]={10,20,30,40,50};
//     int n=sizeof(A)/sizeof(A[0]);
//     int *p = A , somme = 0;
//     for (int i = 0; i < n; i++)//for (p = A; p < A + n; p++)
//     {
//         somme += *(p + i);
//     }
//     printf("La somme des elements du tableau est : %d\n", somme);
//     return 0;
// }

void insert_specific_position(int tab[],int *taille,int valeur,int position){
    for (int i=*taille;i>position;i--)
    {
        tab[i]=tab[i-1];
    }
    tab[position]=valeur;
    (*taille)++;
}
void afficher_tableau(int tableau[],int taille){
    puts("Affichage du tableau");
    for (int i = 0; i < taille; ++i)
    {
        printf("%d |",tableau[i]);
    }
    puts("");
}
int main(int argc, char const *argv[])
{
    int n=6,valeur=5,position=3;
    int tableau[7]={1,2,3,4,6,7};
    insert_specific_position(tableau, &n,  valeur, position);
    afficher_tableau(tableau, n);
    printf("%d",n);
    return 0;
}