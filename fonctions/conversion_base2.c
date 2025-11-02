#include<stdio.h>
int main(){
    // Exercice 1: Conversion d'un nombre entier de la base 10 à la base 2
    int nbr,count=100,i,cpt=0;
    int T[100];
    printf("Entrer un nombre en base 10: ");
    scanf("%d",&nbr);
    int nombre_initial = nbr;
    while (nbr/2 != 0)
    { 
        for ( i = 0; i < count; i++)
        {
            T[i]= nbr % 2;
            cpt++;
            nbr = nbr / 2;
            if (nbr == 0)
            {
                break;
            }
            
        }
    }
    //printf("%d\n",cpt);
    printf("Le nombre %d en base 2 est:\n",nombre_initial);
    for ( i = cpt - 1; i >= 0; i--)
    {
        printf("%d",T[i]);
    }
    puts("");
    return 0;
}