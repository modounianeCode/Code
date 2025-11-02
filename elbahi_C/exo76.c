#include<stdio.h>
void remplir_tableau(int count,float T[]);//prototype = en-tete
float somme_elmts (int count,float T[]);
float produit_elmts(int count , float T[]);
float moyenne_elmts(int count , float T[]);
void pos_neg_nbre(int count , float T[]);
int main(){
    int n;
    printf("Entrer la taille du tableau : ");
    scanf("%d",&n);
    float T[n],somme,produit,moyenne;
    remplir_tableau(n , T);
    somme = somme_elmts(n , T );
    produit=produit_elmts(n , T);
    moyenne=moyenne_elmts(n , T);
    printf("La somme des elements du tableau est : %.2f\n",somme);
    printf("Le produit des elements du tableau est :%.2f\n",produit);
    printf("La moyenne des elements du tableau est :%.2f\n",moyenne);
    pos_neg_nbre(n , T);
    return 0;
}
void remplir_tableau(int count,float T[]){
    puts("Remplir le tableau ");
    for (int i = 0; i < count; i++)
    {
        printf("T[%d] : ",i+1);
        scanf("%f",&T[i]);
    }  
}
float somme_elmts (int count,float T[]){
    float somme=0;
    for (int i = 0; i < count; i++)
    {
        somme = somme + T[i];
    }
   return somme; 
}
float produit_elmts(int count , float T[]){
    float produit = 1;
    for (int i = 0; i < count; i++)
    {
        produit = produit * T[i];
    }
    return produit;
}
float moyenne_elmts(int count , float T[]){
    float somme = 0,moyenne;
    for (int i = 0; i < count; i++)
    {
        somme = somme + T[i];
    }
    moyenne = somme / count;
    return moyenne;
}
/*void pos_neg_nbre(int count , float T[]){
    printf("Les nombres positifs sont : \n");
    for (int i = 0; i < count; i++)
    {
        if (T[i] >= 0)
        {
            printf("%.2f ",T[i]);
        }       
    }
    printf("\nLes nombres negatifs sont : \n");
    for (int i = 0; i < count; i++)
    {
        if (T[i] < 0)
        {
            printf("%.2f ",T[i]);
        }     
    }
    puts("");
}*/
void pos_neg_nbre(int count , float T[]){
    float pos[count],neg[count];
    int j=0,k=0;
    for (int i = 0; i < count; i++)
    {
        if (T[i] >= 0)
        {
            pos[j]=T[i];
            j++;
        }       
    }
    printf("Les nombres positifs sont : \n");
    for (int i = 0; i < j; i++)
    {
        printf("%.2f ",pos[i]);
    }
    printf("\n");
    for (int i = 0; i < count; i++)
    {
        if (T[i] < 0)
        {
            neg[k]=T[i];
            k++;
        }     
    }
    printf("Les nombres negatifs sont : \n");
    for (int i = 0; i < k; i++)
    {
        printf("%.2f ",neg[i]);
    }
    puts("");
}