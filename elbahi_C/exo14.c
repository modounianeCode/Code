#include<stdio.h>
int main(){
    int nbrPcopie,facture;
    printf("Saisissez le nombre de photocopies : ");
    scanf("%d", &nbrPcopie);
    if(nbrPcopie < 10){
        facture = 100*nbrPcopie;
    }
    else if (nbrPcopie >10 && nbrPcopie <=30)
    {
        facture = (100 * 10) + (80 * (nbrPcopie - 10));
    }
    else{
        facture = (100 * 10) + (80 * 20) + (50 * (nbrPcopie - 30));
    }
    printf("le nombre de photocopies est : %d\n", nbrPcopie);
    printf("le montant de la facture est : %dfcfa\n", facture); 
    return 0;
}