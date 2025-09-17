#include<stdio.h>
void signe(int a,int b);
int main(){
    int a,b;
    printf("Saisir un entier : ");
    scanf("%d",&a);
    printf("Saisir un autre entier : ");
    scanf("%d",&b);
    signe(a,b);
    return 0;
}
void signe(int a,int b){
    if ( a*b > 0)
    {
        printf("%d et %d sont de meme signe \n",a,b);
    }
    else
        printf("%d et %d sont de signe contraires\n",a,b);   
}