#include<stdio.h>
int main(){
int l,i,j;
printf("Entrer le nombre de lignes : ");
scanf("%d",&l);
for(i=1;i<=l;i++){
    for(j=1;j<=i;j++){
    printf("* ");
    }
    puts("");
}
printf("Le triangle de %d lignes est dessiné.\n", l);
printf("Fin du programme.\n");
return 0;
}
