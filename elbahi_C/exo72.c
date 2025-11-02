#include<stdio.h>
void nbre_premier(int n);
int main(){
    int nombre;
    printf("Entrer un nombre : ");
    scanf("%d",&nombre);
    nbre_premier(nombre);
    return 0;
}
void nbre_premier(int n){
    int i,ndiv=0;
    for ( i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            ndiv++;
        }       
    }
    if (ndiv == 2)
    {
        printf("%d est un nombre premier\n",n);
    }
    else
    {
        printf("%d n'est pas un nombre premier\n",n);
    }    
}