#include<stdio.h>
int main(){
    int n,i;
    do{
    printf("Entrer un nombre entier positif : ");
    scanf("%d",&n);
    }while(n <= 0);
    int T[n];
    printf("Les %d premiers nombres pairs sont : \n",n);
    printf("2 ");
    for (i = 3 ; i < 2 * n; i++)
    {
      if (i % 2!=0)
      {
        printf("%d ",i);
      } 
    }
    puts("");
    return 0;
}