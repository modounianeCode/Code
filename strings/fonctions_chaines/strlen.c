#include<stdio.h>
#include<string.h>
int taille(char chaine[]){
    int cpt=0;
    char *pointeur = chaine;
    while(*pointeur != '\0'){
        cpt++;
        pointeur++;
    }
    return cpt;
}
int main(){
    char chain[] = "salut";
    printf("La chaine est %s\n",chain);
    int size = taille(chain);
    printf("la taille de la chaine est %d\n",size);
    int taille_string = strlen(chain);
    printf("la taille de la chaine avec strlen est %d\n",taille_string);
    int taille_2 = strlen("bonjour");
    printf("la taille de la chaine 'bonjour' avec strlen est %d\n",taille_2);
    return 0;
}