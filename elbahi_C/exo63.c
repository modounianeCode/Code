#include<stdio.h>
int main(){
int taille=100,n,i,j,position;
printf("Entrer la taille du tableau : ");
scanf("%d",&n);
int T[n];
puts("Remplissage du tableau");
for(i=0;i<n;i++){
printf("T[%d] : ",i+1);
scanf("%d",&T[i]);
}
do{
printf("Entrer la position de l'element a supprimer de 0 a %d : ",n-1);
scanf("%d",&position);
}while(position < 0 || position > n);
puts("Avant suppression");
for(i=0;i<n;i++){
printf("%d\t",T[i]);
}
for(j = position ; j < n ; j++){
if(position == j){
T[position]=T[j+1];
position++;
}
}
n--;
puts("\nApres suppression");
for(j=0;j<n;j++){
printf("%d\t",T[j]);
}
puts("");
return 0;
}
