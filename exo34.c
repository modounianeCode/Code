#include<stdio.h>
int main(){
    int n,u,u1=1,i,u0=0;
    do
    {
       printf("Entrer un entier superieur a 2 : ");
       scanf("%d",&n); 
    } while (n<=2);
    printf("les %d termes de la suite de fibonacci sont : \n",n);
    printf("U0=%d\nU1=%d\n",u0,u1);
  for ( i = 2; i <= n; i++)
  {
    u=u0+u1;
    printf("U%d=%d\n",i,u);
    u0=u1;
    u1=u;
  }
  return 0;
}