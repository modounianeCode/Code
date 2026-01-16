#include<stdio.h>
#include<stdlib.h>
int main(){
    int a =10,b = 5;
    int tab[3] = {1,2,3};
    int *p;
    tab[0] = a;
    printf("%p\n",&a);
    printf("%p\n",&b);
    printf("%d\n",tab[0]);
    *(tab + 1) = b;
    printf("%d\n",*(tab + 1));
    p = tab+2;
    printf("%p\n",p);
    *p = *(p-1);
    printf("%d\n",*p);
    --p;
    printf("%p\n",p);
    *p = *(p-1);
    printf("%d\n",*p);
    --p;
    printf("%p\n",p);
    *p = *p +2;
    printf("%d\n",*p);
    return 0;
}