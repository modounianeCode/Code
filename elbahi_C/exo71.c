#include<stdio.h>
void bissextile(int annee){
if(annee % 4 ==0 && annee % 100 != 0 || annee % 400 == 0){
printf("L'annee %d est bissextile\n",annee);
}
else
printf("L'annee %d n'est pas bissextile\n",annee);
}
int main(){
int annee;
printf("Entrer une annee : ");
scanf("%d",&annee);
bissextile(annee);
return 0;
}
