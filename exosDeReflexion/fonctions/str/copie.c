#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void copie(char *original){
    char *ptr = original;
    char *copie = (char*)malloc(strlen(original) * sizeof(char));
    char *ptrCopie=copie;
    while(*ptr != '\0'){
        // && *ptr != '\n'
        *ptrCopie=*ptr;
        ptr++;
        ptrCopie++;
    }
    *ptrCopie='\0';
    ptr=original;
    ptrCopie=copie;
    printf("\nLa chaine originale est: %s\n",original);
    printf("La chaine copiee est: %s\n",copie);
    free(copie);
    copie=NULL;
}
int main(){
    char texte[100]={};
    printf("Saisir un texte : ");
    fgets(texte,100,stdin);
    printf("taille: %ld\n",strlen(texte));
    copie(texte);
    char b[100]={};
    strcpy(b,texte);
    printf("copie:%s",b);
    return 0;
}