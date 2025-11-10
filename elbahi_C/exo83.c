#include<stdio.h>
void echange(int *x, int *y){
    int temp,somme = 0, produit = 1;
    if (*x * *y > 0)
    {
        printf("Echange des valeurs car %d et %d sont de meme signe\n",*x,*y);
        temp = *x;
        *x = *y;
        *y = temp;
        printf("Apres echange, la valeur de x est : %d\n",*x);
        printf("Apres echange, la valeur de y est : %d\n",*y);
    }
    else
    {
        puts("Les nombres sont de signes differents, pas d'echange");
        somme = *x + *y;
        produit = (*x) * (*y);
        printf("La somme de %d + %d est : %d\n",*x,*y,somme);
        printf("Le produit de %d * %d est : %d\n",*x,*y,produit);
    }   
}
int main(){
    int a, b, *pa = &a, *pb = &b;
    printf("Entrer un nombre entier a : ");
    scanf("%d",pa);
    printf("Entrer un autre nombre entier b : ");
    scanf("%d",pb);
    if (*pa * *pb > 0)
    {
    printf("Avant echange, la valeur de a est : %d\n",*pa);
    printf("Avant echange, la valeur de b est : %d\n",*pb);
    }
    echange(pa, pb);
    return 0;
}