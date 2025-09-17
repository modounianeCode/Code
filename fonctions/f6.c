#include<stdio.h>
int valeur_absolue(int n){
if (n<0)
    return -n;
else
    return n;

}
int main(){
    int n;
    printf("Entrer un nombre : ");
    scanf("%d",&n);
    int val;
    val=valeur_absolue(n);
    printf("La valeur absolue de %d est : %d\n",n,val);
    return 0;
}