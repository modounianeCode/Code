#include<stdio.h>
#include<math.h>
int main(){
int nbr1,nbr2,operation;
char continuer='O';
puts(":::::Menu:::::");
puts("1-Addition");
puts("2-Soustraction");
puts("3-Multiplication");
puts("4-Division");
puts("5-Modulo");
puts("6-Puissance");
do{
puts("Entrer un entier pour choisir l'operation");
scanf("%d",&operation);
puts("Entrer le premier entier");
scanf("%d",&nbr1);
puts("Entrer le deuxieme entier");
scanf("%d",&nbr2);
switch(operation){
case 1:
printf("%d + %d = %d\n",nbr1,nbr2,nbr1+nbr2);
break;
case 2:
printf("%d - %d = %d\n",nbr1,nbr2,nbr1-nbr2);
break;
case 3:
printf("%d * %d = %d\n",nbr1,nbr2,nbr1*nbr2);
break;
case 4:
if(nbr2==0)
puts("La division par 0 est impossible");
else
printf("%d / %d = %d\n",nbr1,nbr2,nbr1/nbr2);
break;
case 5:
printf("%d %% %d = %d\n",nbr1,nbr2,nbr1%nbr2);
break;
case 6:
printf("%d pow %d = %f\n",nbr1,nbr2,pow(nbr1,nbr2));
break;
default:
puts("L'operateur entre n'est pas pris en charge");
}
puts("Voulez vous continuer ?");
scanf(" %c",&continuer);
if(continuer=='n'|| continuer=='N')
break;
else
puts("Continuer");
}while(continuer!='n'|| continuer!='N');
return 0;
}