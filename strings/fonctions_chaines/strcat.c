#include<stdio.h>
char *concatene(char *chaine_dest, char *chaine_src){
    char *pointeur_dest = chaine_dest;
    while(*pointeur_dest != '\0'){
        pointeur_dest++;
    }
    pointeur_dest = chaine_src;
    while(*pointeur_dest != '\0'){
        *pointeur_dest = *chaine_src;
        pointeur_dest++;
        chaine_src++;
    }
    *pointeur_dest = '\0'; // Ajouter le caractère de fin de chaîne
    return chaine_dest;
}
int main(){
    char str[50] = "Bonjour, ";
    char str2[] = "le monde!";
    printf("Chaîne avant concaténation : %s\n", str);
    char *resultat = concatene(str, str2);
    printf("Chaîne après concaténation : %s\n", resultat);
    return 0;
}