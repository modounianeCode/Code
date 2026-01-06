#include<stdio.h>
#include<string.h>
int main(){
    char tab[] = "salut";
    printf("Le chaine est %s\n", tab);
    int d = strlen(tab);
    printf("La longueur de la chaine est %d\n", d);
    return 0;
}