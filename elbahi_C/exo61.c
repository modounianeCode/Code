#include<stdio.h>
int main(){
int n,i,max1,max2;
printf("Entrer la taille du tableau : ");
scanf("%d",&n);
int T[n];
puts("Remplissage du tableau");
for(i=0;i<n;i++){
printf("T[%d]:",i);
scanf("%d",&T[i]);
}
max1=T[0];
for (i=1;i<n;i++){
if(max1<T[i]){
 max1=T[i];
}
}
max2=T[0];
for(i=1;i<n;i++){
if(max1==T[i]){
continue;
}
else if(max2<T[i]){
max2=T[i];
}
}
puts("Les elements du tableau sont");
for(i=0;i<n;i++){
printf("%d\t",T[i]);
}
puts("");
printf("Le premier plus grand entier du tableau est : %d\n",max1);
printf("Le deuxieme plus grand entier du tableau est : %d\n",max2);
return 0;
}
