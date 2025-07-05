#include<stdio.h>
int main(){
    int a,b;
    printf("Saisissez un entier : ");
    scanf("%d",&a);
    printf("Saisissez un autre entier : ");
    scanf("%d",&b);
    printf("a=%d b=%d\n",a,b);
    printf("%d+%d=%d\n",a,b,a+b);
    printf("%d-%d=%d\n",a,b,a-b);
    printf("%d*%d=%d\n",a,b,a*b);
    if (b==0)
    {
        printf("La division est impossible\n");
    }
    else
        printf("%d/%d=%d\n",a,b,a/b);
    printf("Fin du programme\n");
    return 0;
}