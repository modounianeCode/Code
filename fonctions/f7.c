#include<stdio.h>
#include<stdlib.h>
void remplir(int *pa,int n);
int main(){
    int *pa,*pb;
    int a,b,i,j;
    printf("Entrer la taille du tableau A : ");
    scanf("%d",&a);
    printf("Entrer la taille du tableau B : ");
    scanf("%d",&b);
    pa=malloc(a*sizeof(*pa));
    pb=malloc(a*sizeof(*pb));
    puts("Remplissage des 2 tableaux simultanement");
    remplir(pa,a);
    remplir(pb,b);
    for (i=a,j=0;i<a+b,j<b;i++,j++)
    {
        *(pa+i) = *(pb+j);
    }
    int n=a+b;
    puts("Tableau resultant");
    for ( i = 0; i < n ; i++)
    {
        printf("%d ",pa[i]);
    }
    puts("");
    return 0;
}
void remplir(int *pa,int n){
int i;
for ( i = 0; i < n; i++)
{
    printf("tab[%d]:",i);
    scanf("%d",&pa[i]);
}
}