#include<stdio.h>
int main(){
    int VilleA=1000000,VilleB=500000,n=1;
  while (VilleB - VilleA < 0 )
  {
   VilleA=VilleA+50000;
   VilleB+=(VilleB * 0.08);
    printf("Annee : %d\n",n);
   n++;
   printf("ville A : %d , ville B : %d\n",VilleA,VilleB);
  }
  printf("Dans %d ans,la population de la ville B depassera celle de la ville A \n",n);
    return 0;
}