#include<stdio.h>
#include<stdlib.h>
void ajouterAuTableau(int *tab,int indice1,int indice2);
int *indicesReturned(int *tab,int count,int target);

int main(){

    int nums[]={3,7,2,6};
    int size=sizeof(nums)/sizeof(nums[0]);
    int target;
    printf("Entrer le nombre cible : ");
    scanf("%d",&target);
    int *arrayIndex=indicesReturned(nums,size,target);
    printf("===== Affichage =====\n");
    printf("[");
    for (int i = 0; i < 2; i++){
        printf("%d ",arrayIndex[i]);
    }
    printf("]\n");
    return 0;
}
int *indicesReturned(int *tab,int count,int target){
    int trouve=0;
    int *tabIndices;
    tabIndices=(int*)malloc(2*sizeof(int));

    int i,j;

    for( i=0 ;i <count-1 ;i++){
        for ( j = i+1; j < count; j++)
        {
            if(tab[i]+tab[j]==target){
                trouve=1;
                ajouterAuTableau(tabIndices,i,j);
                break;
            }
        }
        if(trouve==1) break;
    }

    // printf("La somme de deux nombres dans le tableau ne correspond pas à %d\n",target);

    return tabIndices;

}
void ajouterAuTableau(int *tab,int indice1,int indice2){
    int i=0;
    while (i<2)
    {
        tab[i]=indice1;
        tab[i+1]=indice2;
        i+=2;
    }
}