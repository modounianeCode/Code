#include<stdio.h>
int menu();
void choice(int choix);
int main(){
   int choix = menu();
   choice(choix); 
   return 0;
}
void choice(int choix){
    switch (choix)
    {
    case 1:
        printf("Vous avez choisi l'operation Somme de deux nombres\n");
        break;
    case 2:
        printf("Vous avez choisi l'operation produit de deux nombres\n");
        break;
    case 3:
        printf("Vous avez choisi l'operation factoriel\n");
        break;
    case 0:
        printf("Vous avez choisi de quitter!!!\n");
        break;
    default:
        printf("L'operation n'est pas pris en charge\n");
    }
}
int menu(){
    printf("=============================\n");
    printf("   ======== Menu ======== \n");
    printf("=============================\n");
    printf("1.Somme de deux nombres\n");
    printf("2.Produit de deux nombres\n");
    printf("3.Factoriel d'un nombre\n");
    printf("0.Quitter\n");
    int choix;
    do
    {
        printf("Faites un choix:(0/1/2/3): ");
        scanf("%d",&choix);
    } while (choix != 0 && choix != 1 && choix !=2 && choix != 3);
    return choix;
}