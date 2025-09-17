#include<stdio.h>
int max (int a,int b);
int main(){
    int a,b;
    printf("Saisir un entier : ");
    scanf("%d",&a);
    printf("Saisir un autre entier : ");
    scanf("%d",&b);
    printf("a=%d et b=%d\n",a,b);
    int c;
    c=max(a,b);
    return 0;
}
int max(int a,int b){
    if (a>b)
    {
        printf("le maximum est a = %d\n",a);
    }
    else 
        printf("Le maximum est b = %d\n",b);   
}