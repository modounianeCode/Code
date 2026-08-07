#include<stdio.h>
void estParfait(int nombre);
int sommeNombrePremier(int nombre);
int main(){
    int nombre,somme;
    puts("Ce programme permet de determiner la somme des nombres premiers inferieurs a un nombre n donne\net de determiner si ce dernier est parfait ou pas");
    printf("Saisissez un nombre : ");
    scanf("%d",&nombre);
    estParfait(nombre);
    somme=sommeNombrePremier(nombre);
    printf("La somme des nombres premiers inferieurs a %d est %d\n",nombre,somme);
    return 0;
}
void estParfait(int nombre){
    int i,sommeDiviseurInferieur=0;
    for(i=1;i<nombre;i++){
        if(nombre%i==0){
            sommeDiviseurInferieur+=i;
        }
    }
    if(sommeDiviseurInferieur==nombre){
        printf("%d est parfait\n",nombre);
    }else{
        printf("%d est imparfait\n",nombre);
    }
}
int sommeNombrePremier(int nombre){
    int i,j,somme=0;
    for ( i = 1; i <= nombre; i++)
    {
        int nombreDiviseur=0;
        for(j=1;j<=i;j++){
            if (i%j==0)
            {
                nombreDiviseur++;
            }
        }
        if (nombreDiviseur==2)
        {
            somme+=i;
        }
    }
    return somme;
}