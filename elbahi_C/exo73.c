#include<stdio.h>
void compte_chiffres(int n);
int main(){
    int nombre;
    printf("Entrer un nombre : ");
    scanf("%d",&nombre);
    compte_chiffres(nombre);
    return 0;
}
void compte_chiffres(int n){
    int cpt=1,tmp;
    tmp=n;
    while (n / 10 != 0 )
    {
        cpt++;
        n=n/10;
    }
    printf("le nombre %d compte %d chiffres\n",tmp,cpt);
}