#include<stdio.h>
#include<stdlib.h>
void insert(int *a,int *size,int elementToInsert,int position);
void delete(int *a,int *size,int index);
void printArray(int *a,int size);
int main(){
    int tab[]={0,2,3,4,5};
    int size=sizeof(tab)/sizeof(tab[0]);
    printf("Avant insertion : ");
    printArray(tab,size);
    insert(tab,&size,1,1);
    printf("Apres insertion : ");
    printArray(tab,size);
    delete(tab,&size,0);
    printf("Apres suppression: ");
    printArray(tab,size);
    // printf("%d \n",size);
    return 0;
}
void insert(int *a,int *size,int elementToInsert,int position){
    if(position<0 || position>*size){
        printf("Position invalide\n");
        return;
    }
    int i;
    (*size)++;
    for(i=*size-1;i>position;i--){
        a[i]=a[i-1];
    }
    a[position]=elementToInsert;
}
void printArray(int *a,int size){
    int i;
    for(i=0;i<size;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}
void delete(int *a,int *size,int index){
    for (int i = index; i < *size-1; i++)
    {
        a[i]=a[i+1];
    }
    (*size)--;
}