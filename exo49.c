#include<stdio.h>
int main(){
int tab[10],i;
for(i=0;i<10;i++){
tab[i]=0;
}
for(i=0;i<10;i++){
printf("tab[%d]=%d \n",i+1,tab[i]);
}
puts("");
return 0;
}
