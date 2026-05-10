#include<stdio.h>
#include<stdlib.h>
int main(){
    int tab[]={1,2,3,4,5};
    int t[2][3]={{100,200,300},{400,500,600}};
    int **pointe[4];
    pointe[2]=&t;
    pointe[1]=&t[1];
    pointe[0]=&t[0];
    int count = sizeof(t[0])/sizeof(t[0][0]);
    int size=sizeof(tab)/sizeof(int);
    int *ptr=tab;
    int i;
    for(pointe[0]= t[0],i=0; pointe[0] < t[0]+count,i<3;pointe[0]++,i++){
        printf("%d ",*pointe[0][i]);
    }
    return 0;
}