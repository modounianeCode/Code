#include<stdio.h>
void echange(int a,int b);
void echangePtr(int* a,int* b);
int main(){
int a = 1,b = 2;

puts("Avant echange");
printf("a = %d\tb = %d\n",a,b);

echange(a,b);
puts("Echange sans utiliser les pointeurs (ECHEC)");
printf("a = %d\tb = %d\n",a,b);


echangePtr(&a,&b);
puts("Echange en utilisant les pointeurs (SUCCES)");
printf("a = %d\tb = %d\n",a,b);
return 0;
}

void echange(int a,int b){
int c = a;
a = b;
b = c;
}


void echangePtr(int* a,int* b){
int c = *a;
*a = *b;
*b = c;
}
