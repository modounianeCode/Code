#include<stdio.h>
int fact(int n);
int main(){
    int n,facte;
    printf("Entrer un nombre : ");
    scanf("%d",&n);
    facte=fact(n);
    printf("%d!=%d\n",n,facte);
    return 0;
}
int fact(int n){
    int fac=1;
   for(int i=1;i<=n;i++){
     fac*=i;
   }
   return fac;
}