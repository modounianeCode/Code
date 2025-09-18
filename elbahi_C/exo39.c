#include<stdio.h>
int main(){
int nbr,cpt=1,i;
printf("Saisir un nombre : ");
scanf("%d",&nbr);
i=nbr;
while(i/10!=0){
i=i/10;
cpt++;
}
printf("Le nombre %d a %d chiffres.\n",nbr,cpt);
return 0;
}
