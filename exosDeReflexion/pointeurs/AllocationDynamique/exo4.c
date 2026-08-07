#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main(){
    int taille=0;
    char reponse;
    int *tab = (int*)malloc(sizeof(int));
    do
    {
        printf("Voulez vous ajouter des éléments (o/n) : \n");
        scanf(" %c",&reponse);
    } while (tolower(reponse) != 'n' && tolower(reponse) != 'o');
    
    while (tolower(reponse) == 'o')
    {
        int *c = realloc(tab,sizeof(int));
        if(c == NULL){
            printf("Erreur d'allocation\n");
            return 1;
        }
        else
        {
            tab = c;
            printf("Enter the element : ");
            scanf("%d",&tab[taille]);
            taille++;
            //Demander à l'utilisateur le nombre d'éléments a taper
        }
        do
        {
            printf("Voulez vous continuer(o/n)? ");
            scanf(" %c",&reponse);
        } while (tolower(reponse) != 'n' && tolower(reponse) != 'o');
        
        if(tolower(reponse) == 'n') break;
        reponse ='o';
    }
    // printf("%d",taille);
    if(taille == 0) {
        printf("il n'a pas d'éléments dans le tableau\n");
        return 0;
    }
    puts("Affichage du tableau");
    for (int i = 0; i < taille; i++)
    {
        printf("%d |",tab[i]);
    }
    puts("");
    free(tab);
    tab = NULL;
    return 0;
}