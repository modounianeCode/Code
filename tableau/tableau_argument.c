#include<stdio.h>
void nombresPaires(int *tab,int n){
 for (int i = 0; i < n; i++)
    {
        if(tab[i] % 2 == 0){
           printf("Le nombre %d est pair\n", tab[i]);
        }
    }
}
int main(){
    int tab[] = {15, 25, 30, 45, 56};
    int size = sizeof(tab) / sizeof(tab[0]);
    nombresPaires(tab, size);
    return 0;
}