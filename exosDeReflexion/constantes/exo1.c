#include <stdio.h>
#define TAILLE 3
#define COUCOU() printf("Coucou\n")
#define Raconter() printf("Je raconte une histoire\n");\
    printf("C'est une histoire de fou\n");\
    printf("C'est une histoire de malade\n");
#define MAX(a,b) ((a > b)? (a+b) : (a*b))
int main(){
    // int tab[TAILLE];
    // COUCOU();
    // Raconter();
    // printf("Remplissage du tableau\n");
    // for (int i = 0; i < TAILLE; i++)
    // {
    //     printf("tab %d : ", i + 1);
    //     scanf("%d", &tab[i]);
    // }
    // COUCOU();
    // printf("%d\n",MAX(2,4));
    // printf("%d | %s\n", __LINE__, __FILE__);
    // printf("%d | %s\n", __LINE__, __DATE__);
    // printf("%d | %s\n", __LINE__, __TIME__);
    // printf("%d | %d\n", __LINE__, __STDC__);
    // int tabInverse[TAILLE];
    // int i,j;
    // for ( i = TAILLE - 1, j = 0; i >= 0 , j < TAILLE; i--, j++)
    // {
    //     tabInverse[j] = tab[i];
    // }
    // puts("Affichage de l'inverse");
    // for (int i = 0; i < TAILLE; i++)
    // {
    //     printf("%d |", tabInverse[i]);
    // }
    // puts("");
    int a = MAX(5,4);
    printf("%d\n",a);
    return 0;
}