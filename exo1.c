#include<stdio.h>
int main(){
    int annee,age;
    printf("Entrer votre annee de naissance : ");
    scanf("%d",&annee);
    age=2025-annee;
    printf("Votre annee de naissance est %d, donc vous etes ages de %d ans\n",annee,age);
    puts("Fin du programme");
return 0;
}
