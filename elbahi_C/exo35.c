#include<stdio.h>
int main(){
    //programme qui determine si un nombre est premier ou non
    int nbr,i,ndiv=0;
    do{
    printf("Entrer un nombre : ");
    scanf("%d",&nbr);
    }while(nbr <= 0);
    printf("Les diviseurs de %d sont : \n",nbr);
    for ( i = 1; i <= nbr; i++)
    {
        if (nbr%i==0)
        {
            ndiv++;
            printf("%d\t",nbr/i);
        }
    }
    puts("");  
    if(ndiv==2)
    {
        printf("%d est un nombre premier car n_diviseur =%d\n",nbr,ndiv);
    }
    else
        printf("%d n'est pas un nombre premier car N_diviseur =%d\n",nbr,ndiv);
    return 0;
}