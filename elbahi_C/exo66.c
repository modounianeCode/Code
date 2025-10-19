#include<stdio.h>
int main(){
int n,i;
printf("Entrer la taille du tableau : ");
scanf("%d",&n);
int T[n],P[n],I[n];
puts("Remplissage du tableau ");
for(i=0;i<n;i++){
printf("T[%d] : ",i+1);
scanf("%d",&T[i]);
}
puts("Affichage du tableau");
for(i=0;i<n;i++){
printf("%d ",T[i]);
}
printf("\nLes valeurs paires sont : \n");
for(i=0;i<n;i++){
if(T[i]%2==0){
P[i]=T[i];
printf("%d ",P[i]);
}
}
puts("");
printf("Les valeurs impaires sont : \n");
for(i=0;i<n;i++){
if(T[i]%2!=0){
I[i]=T[i];
printf("%d ",I[i]);
}
}
puts("");
return 0;
}
