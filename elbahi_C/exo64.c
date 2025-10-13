#include<stdio.h>
int main(){
    //programme qui determine les elements uniques dans un tableau
int n=100;
int taille,i,length;
printf("Entrer la taille du tableau : ");
scanf("%d",&taille);
int T[taille];
length=sizeof(T)/sizeof(T[0]);
puts("Remplissage du tableau ");
for(i=0;i<length;i++){
printf("T[%d] : ",i+1);
scanf("%d",&T[i]);
}
puts("Affichage du tableau");
for(i=0;i<length;i++){
printf("%d ",T[i]);
}
puts("\nElements uniques du tableau");
for(i=0;i<length;i++){
    int j,compteur=0;
    for(j=0;j<length;j++){
        if(T[i]==T[j]){
            compteur++;
        }
    }
    if(compteur==1){
        printf("%d ",T[i]);
    }
}
puts("");
    return 0;
}

