#include<stdio.h>
void somme(int n){
    printf("Addition de %d avec les nombres allant de 1 a 10\n",n);
    for (int i = 0; i < 10; i++)
    {
        printf("%d + %d = %d\n",n,i,n+i);
    }  
}
void diff(int n){
    printf("Soustraction de %d avec les nombres allant de 1 a 10\n",n);
    for (int i = 0; i < 10; i++)
    { 
        printf("%d - %d = %d\n",n,i,n-i);
    }   
}
void multiple(int n){
    printf("Multiplication de %d avec les nombres allant de 1 a 10\n",n);
    for (int i = 0; i < 10; i++)
    {
        printf("%d * %d = %d\n",n,i,n*i);
    } 
}
int main(){
    int n;
    printf("Entrer un nombre : ");
    scanf("%d",&n);
    somme(n);
    diff(n);
    multiple(n);
    return 0;
}