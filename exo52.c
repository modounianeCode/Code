#include<stdio.h>
int main(){
int U[3],V[3],i;
int ps=0;
puts("Remplissage du premier vecteur U(x,y,z)");
for(i=0;i<3;i++){
printf("U%d:",i+1);
scanf("%d",&U[i]);
}
puts("Remplissage du deuxieme vecteur V(a,b,c)");
for(i=0;i<3;i++){
printf("U%d:",i+1);
scanf("%d",&V[i]);
}
for ( i = 0; i < 3; i++)
{
   ps = ps + U[i] * V[i]; 
}
printf("Le produit scalaire de U et V est : %d\n",ps);
return 0;
}
