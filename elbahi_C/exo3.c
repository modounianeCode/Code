#include<stdio.h>
#include<math.h>
int main(){
    int x,y;
    printf("Saisir un entier : ");
    scanf("%d",&x);
    printf("Saisir un autre entier : ");
    scanf("%d",&y);
    printf("%d^%d=%f\n",x,y,pow(x,y));
    puts("Fin du programme");
    return 0;
}