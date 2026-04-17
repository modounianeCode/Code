#include<stdio.h>
int  existeDansLeTableau(int tab[],int count,int number){
    for (int  i = 0; i < count; i++)
    {
        if(tab[i]==number){
            return 1;
        }
    }
    return 0;
}
void deleteElement(int tab[],int *count,int number){
    for (int i = 0; i < *count; i++)
    {
        if(tab[i]==number){
            for(int j=i;j<(*count-1);j++){
                tab[j]=tab[j+1];
            }
        }
    }
    (*count)--;

}
void afficherTableau(int tab[],int count){
    printf("Array [");
    for (int i = 0; i < count; i++)
    {
        printf("%d ",tab[i]);
    }
    printf("]\n");
}  
int main(){
    int tab[]={1,2,3,5};
    int size=sizeof(tab)/sizeof(tab[0]);
    int number;
    afficherTableau(tab,size);
    printf("entrer le nombre a supprimer : ");
    scanf("%d",&number);
    int exist=existeDansLeTableau(tab,size,number);
    if(exist==0){
        printf("le nombre n'existe pas dans le tableau\n");
        afficherTableau(tab,size);
        return 0;
    }else{
        printf("le nombre existe dans le tableau\n");
        deleteElement(tab,&size,number);
        afficherTableau(tab,size);
    }
}