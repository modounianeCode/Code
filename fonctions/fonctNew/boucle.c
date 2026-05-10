#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    int somme=0,i;
    for(i=0;i<=200;i++){
    somme+=i;
    printf("somme %d = %d\n",i,somme);
    }
    return 0;
    */
    /*
    int nbr,i=0;
    printf("Entrer un nombre : ");
    scanf("%d",&nbr);
    while(nbr<0 || nbr>10){
    printf("Entrer un nombre compris entre 0 et 10 : ");
    scanf("%d",&nbr);
    }
    printf("table de multiplication de %d \n",nbr);
    while(i<=10){
    printf("%d * %d = %d\n",nbr,i,nbr*i);
    i++;
    }
    return 0;
    */
    /*
    int nbr,i=0;
    printf("Entrer un nombre : ");
    scanf("%d",&nbr);
    while(nbr<0 || nbr>10){
    printf("Entrer un nombre compris entre 0 et 10 : ");
    scanf("%d",&nbr);
    }
    printf("table de multiplication de %d \n",nbr);
    do{
    printf("%d * %d = %d\n",nbr,i,nbr*i);
    i++;
    }while(i<=10);
    return 0;
    */
    /*
    int nbr;
    printf("Entrer un nombre : ");
    scanf("%d",&nbr);
    puts("Le nombre entre doit etre en 10 et 20");
    while(nbr<10 || nbr>20){
        if(nbr<10)
        puts("Entrer un nombre Plus grand ");
        else
        puts("Entrer un nombre Plus petit ");

        scanf("%d",&nbr);
        }
    printf("Bravo!!!, %d est entre 10 et 20\n",nbr);
    return 0;
    */
    /*
    int nbr,i=1,somme=0;
    do{
    printf("Entrer un nombre : ");
    scanf("%d",&nbr);
    }while(nbr<=1);
    while(i<=nbr){
       somme+=i;
       i++;
       }
    printf("La somme des entiers de 1 a %d est : %d\n",nbr,somme);
    return 0;
    */
    int nbr,i=1,p=1;
    printf("Entrer un nombre : ");
    scanf("%d",&nbr);
    while(i<=nbr){
    p*=i;
    i++;
    }
    printf("Le produit des nombres de 1 a %d est : %d\n",nbr,p);
    if(nbr<1){
    puts("Vous devez entrer un nombre strictement positif. Bonne journee");
    }
    return 0;
}
