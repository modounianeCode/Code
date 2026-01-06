#include<stdio.h>
#include<string.h>
char *copie(char *chaine_dest, char *chaine_src){
    char *pointeur_src = chaine_src;
    char *pointeur_dest = chaine_dest;
    while(*pointeur_src != '\0'){
        *pointeur_dest = *pointeur_src;
        pointeur_dest++;
        pointeur_src++;
    }
    *pointeur_dest = '\0'; // Ajouter le caractère de fin de chaîne
    return chaine_dest;
}
int main(){
    char *chaine1 = "Hello, World!";
    char chaine2[50];
    printf("Chaîne source : %s\n", chaine1);
    copie(chaine2, chaine1);
    printf("Chaîne copiée : %s\n", chaine2);
    int d = strcmp(chaine1, chaine2);
    if(d == 0){
        printf("Les deux chaînes sont identiques.\n");
    } else {
        printf("Les deux chaînes sont différentes.\n");
    }
    return 0;
}