#include<stdio.h>
void table_multiplication(int nbr);
int main(){
int n;
printf("Entrer un entier : ");
scanf("%d",&n);
table_multiplication(n);
return 0;
}
void table_multiplication(int nbr){
int i;
printf("La table de multiplication de %d est :\n",nbr);
for(i = 0;i <= 10;i++){
printf("%d * %d = %d\n",nbr,i,nbr*i);
}
}
