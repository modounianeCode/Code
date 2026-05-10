#include<stdio.h>
int main(){
    int annee,age;
    printf("Entrer votre annee de naissance : ");
    scanf("%d",&annee);
    age=2025-annee;
    printf("Votre annee de naissance est %d, donc vous etes ages de %d ans\n",annee,age);
    if (age<18)
    {
        puts("Vous etes mineur en 2025");
    } else{
        puts("Vous etes majeur en 2025");
    }
    
    puts("Fin du programme");
return 0;
}
