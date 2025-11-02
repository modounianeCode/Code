#include<stdio.h>
int main(){
    int A[]={10,20,30,40,50};
    int n=sizeof(A)/sizeof(A[0]);
    int *p = A , somme = 0;
    for (int i = 0; i < n; i++)//for (p = A; p < A + n; p++)
    {
        somme += *(p + i);
    }
    printf("La somme des elements du tableau est : %d\n", somme);
    return 0;
}