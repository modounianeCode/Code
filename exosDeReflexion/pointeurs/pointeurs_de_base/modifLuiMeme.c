#include<stdio.h>
#include<stdlib.h>
void allouer(int **pp){
*pp = malloc(sizeof(int));

if(*pp == NULL){
printf("Echec d'allocation\n");
return;
}

**pp = 2;
}
int main(){
int *p = NULL;
printf("%p\n",(void*)&p);
allouer(&p);

printf("Valeur : %d\n",*p);

printf("%p\n",(void*)p);
free(p);
p=NULL;
return 0;
}
