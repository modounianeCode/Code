#include<stdio.h>
int main(){
int nombre=0;
printf("nombre = %d\n",nombre);
printf("Adresse de nombre = %p\n",(void *)&nombre);

// %P attend un void *

int *ptr=&nombre;
*ptr=-1;
printf("Changement de la valeur de nombre avec les pointeurs\n");
printf("nombre = %d\n",nombre);
return 0;
}
