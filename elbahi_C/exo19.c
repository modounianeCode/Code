#include<stdio.h>
int main(){
    float pht,pttc;
    char cat;
    printf("Entrer le prix hors taxe : ");
    scanf("%f",&pht);
    printf("Entrer la categorie (a,b,c) : ");
    scanf(" %c",&cat);
    if (cat=='a')
    {
        pttc=pht+(pht*0.07);
    }else if (cat=='b')
    {
        pttc=pht+(pht*0.2);
    }else if(cat=='c'){
        pttc=pht+(pht*0.25);
    }
    else
        pttc=pht;
    printf("le prix pttc est : %.2ffcfa\n",pttc);
    return 0;
}