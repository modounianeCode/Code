#include<stdio.h>
int main(){
int nbr,i;
printf("Saisir un nombre :");
scanf("%d",&nbr);
printf("L'inverse de %d est : ",nbr);
while (nbr%10!=0)
{
    i=nbr%10;
    printf("%d",i);
    nbr=nbr/10;
}
puts("");
return 0;
}
