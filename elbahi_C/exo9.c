#include<stdio.h>
int main(){
    int T,h,m,s,r;
    printf("Entrer le temps en secondes : ");
    scanf("%d",&T);
    h=T/3600;
    r=T%3600;
    m=r/60;
    s=r%60;
    printf("%ds=%dh%dm%ds\n",T,h,m,s);
    return 0;
}