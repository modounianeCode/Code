#include<stdio.h>
int main(){
    int l,c,i,j;
    printf("Entrer le nombre de lignes :");
    scanf("%d",&l);
    printf("Entrer le nombre de colonnes :");
    scanf("%d",&c);
    for(i=1;i<=l;i++){
       for(j=1;j<=c;j++){
            if(i==1||i==l||j==1||j==c)
            printf("*");
            else
            printf(" ");
        }
           puts("");
    }
printf("Le cadre de %d lignes et %d colonnes est cree\n",l,c);
return 0;    
}
