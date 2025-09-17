#include<stdio.h>
#include<stdlib.h>
int somme(int *tab, int n){
    int sum = 0,*i=tab;
    for(i = tab; i < tab + n; i++){
        sum += *i;
    }
    return sum;
}
float moyenne(int *tab, int n){
    return (float)somme(tab, n) / n;
}
int maximum(int *tab, int n){
    int max = *tab, *i = tab;
    for(i = tab; i < tab + n; i++){
        if(*i > max){
            max = *i;
        }
    }
    return max;
}
int minimum(int *tab, int n){
    int min = *tab, *i = tab;
    for(i = tab; i < tab + n; i++){
        if(*i < min){
            min = *i;
        }
    }
    return min;
}
int main(){
    int n;
    printf("Entrer la taille des nombres que vous voulez saisir: ");
    scanf("%d", &n);
    int *tab = (int *)malloc(n * sizeof(int));
    printf("Entrez les nombres:\n");
    for(int i = 0; i < n; i++){
        scanf("%d", &tab[i]);
    }
    printf("Somme: %d\n", somme(tab, n));
    printf("Moyenne: %.2f\n", moyenne(tab, n));
    printf("Maximum: %d\n", maximum(tab, n));
    printf("Minimum: %d\n", minimum(tab, n));
    free(tab);
    printf("Fin du programme.\n");
    return 0;
}