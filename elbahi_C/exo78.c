#include<stdio.h>
void afficher(int count,int T[]);
void trierDCt(int n,int T[]);
int main(){
    int T[]={1,-2,-9,2,0};
    int length = sizeof(T) / sizeof(T[0]);
    afficher(length,T);
    trierDCt(length,T);
    return 0;
}
void afficher(int count,int T[]){
    puts("Les elements du tableau sont ");
    for (int i = 0; i < count; i++)
    {
        printf("%d ",T[i]);
    }   
}
void trierDCt(int n,int T[]){
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1 ; j < n; j++ ){

            if (T[i] < T[j])
            {
                int temp = T[i];
                T[i] = T[j];
                T[j] = temp;   
            }   
        } 
    }
    puts("\ntableau trie par ordre decroissant");
    for ( int i = 0; i < n; i++)
    {
        printf("%d ",T[i]);
    }
    puts("");
}
