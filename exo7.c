#include<stdio.h>
int main(){
    int a,b;
    printf("Saisissez deux entiers : ");
    scanf("%d %d", &a, &b);
    printf("Avant l'echange : a=%d, b=%d\n", a, b);
    a=a-b;
    b=a+b;
    a=b-a;
    printf("Apres l'echange : a=%d, b=%d\n", a, b);
    puts("L'echange a ete effectue sans utiliser de variable temporaire.");
    puts("Ceci est une methode d'echange de valeurs entre deux variables.");
    puts("fin du programme.");
    return 0;
}