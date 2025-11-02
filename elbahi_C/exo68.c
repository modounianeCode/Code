#include<stdio.h>
int main(){
//trier les elements du tableau dans l'ordre decroissant
int T[]={25,14,20,-2,100,-10,40};
int length,i,j,tmp;
length=sizeof(T)/sizeof(T[0]);
for ( i = 0; i < length; i++)
{
   for ( j = i+1; j < length; j++)
   {
        if (T[i] < T[j])
        {
             tmp=T[i];
             T[i]=T[j];
             T[j]=tmp;   
        }       
   }  
}
puts("Tableau trie par ordre decroissant");
for ( i = 0; i < length; i++)
{
        printf("%d ",T[i]);
}
puts("");
return 0;
}
