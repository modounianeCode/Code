#include<stdio.h>
int main(){
int T[5],i,max;
puts("Remplissage du tableau avec 5 entiers");
for(i=0;i<5;i++){
printf("Entrer le %d element : ",i+1);
scanf("%d",&T[i]);
}
max=T[0];
for(i=1;i<5;i++){
if(max < T[i]){
max=T[i];
}
}
puts("Voici les elements du tableau ");
for(i=0;i<5;i++)
   printf("%d ",T[i]);
puts("");
printf("Le maximum est : %d\n",max);
puts("Fin du programme");
return 0;
}
