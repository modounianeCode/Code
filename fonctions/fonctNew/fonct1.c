#include<stdio.h>
int minimum(int a,int b);
int main(){
    int a,b;
    printf("Saisir un entier : ");
    scanf("%d",&a);
    printf("Saisir un autre entier : ");
    scanf("%d",&b);
    printf("a=%d et b=%d\n",a,b);
    int c;
    c=minimum(a,b);
    return 0;
}
int minimum(int a,int b){
    if (a<b)
    {
        printf("le minimum est %d\n",a);
    }
    else 
        printf("Le minimum est %d\n",b);   
}