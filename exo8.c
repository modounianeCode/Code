#include<stdio.h>
int main(){
    int a, b, c;
    printf("Saisissez deux entiers : ");
    scanf("%d %d", &a, &b);
    printf("Avant l'echange : a=%d, b=%d\n", a, b);
    c = a; // Stocker la valeur de a dans c
    a = b; // Affecter la valeur de b à a
    b = c; // Affecter la valeur de c (ancienne valeur de a) à b
    printf("Apres l'echange : a=%d, b=%d\n", a, b);
    puts("L'echange a ete effectue en utilisant une variable temporaire.");
    puts("Ceci est une methode d'echange de valeurs entre deux variables.");
    puts("fin du programme.");
    // Note: The use of a temporary variable is a common method for swapping values.
    return 0;
}