#include<stdio.h>
void cube_nbre(int n);
int main(){
int nombre;
printf("Entrer un nombre : ");
scanf("%d",&nombre);
cube_nbre(nombre);
return 0;
}
void cube_nbre(int n){
int cube;
cube = n * n * n;
printf("Le cube de %d est : ",n);
printf("%d\n",cube);
}
