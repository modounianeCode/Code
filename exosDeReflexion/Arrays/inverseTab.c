#include<stdio.h>
int main(){
    int count,i,j;
    printf("Donner la taille du tableau : ");
    scanf("%d",&count);
    int tab[count];
    printf("Remplissage du tableau\n");
    for ( i = 0; i < count; i++)
    {
        printf("tab %d : ",i+1);
        scanf("%d",&tab[i]);
    }
    int tabInverse[count];
    for ( i = count-1,j=0; i >= 0,j<count; i--,j++)
    {
        tabInverse[j]=tab[i];
    }
    puts("Affichage de l'inverse");
    for ( i = 0; i < count; i++)
    {
        printf("%d |",tabInverse[i]);
    }
    puts("");
    return 0;
}