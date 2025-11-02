#include<stdio.h>
int main(){
    int x = 10;
    int *p = &x;
    printf("La valeur de x est : %d\n", x);
    printf("L'adresse de x est : %p\n", (void*)&x);
    printf("L'adresse de x via p est : %p\n", p);
    printf("L'adresse de p est : %p\n", &p);
    printf("La valeur pointée par p est : %d\n", *p);
    printf("%d - %d = %d\n",x , *p , x - *p);
    return 0;
}