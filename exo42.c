#include<stdio.h>
int main(){
int l,c,i,j;
printf("Entrer le nombre de lignes :");
scanf("%d",&l);
printf("Entrer le nombre de colonnes :");
scanf("%d",&c);
for(i=0;i<=l;i++){
    puts("");
for(j=0;j<=c;j++){
printf("*");
}
}
puts("");
printf("Le rectangle de %d lignes et %d colonnes est dessiné.\n", l, c);
printf("Fin du programme.\n");
return 0;
}
