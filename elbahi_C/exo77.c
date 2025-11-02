#include<stdio.h>
void remplir_T(int count,float T[]);
float maximum_T(int count,float T[]);
float minimum_T(int count,float T[]);
void renvoyer_inverse(int count,float T[]);

int main(){
    int taille;
    float max,min;
    printf("Entrer la taille du tableau : ");
    scanf("%d",&taille);
    float T[taille];
    remplir_T(taille,T);
    max = maximum_T(taille,T);
    min = minimum_T(taille,T);
    printf("Le maximum du tableau est : %.3f\n",max);
    printf("Le minimum du tableau est : %.3f\n",min);
    renvoyer_inverse(taille,T);
    return 0;
}
void remplir_T(int count,float T[]){
    int i;
    puts("Remplissage du tableau ");
    for ( i = 0; i < count; i++)
    {
        printf("T[%d] : ",i+1);
        scanf("%f",&T[i]);
    }
    
}
float maximum_T(int count ,float T[]){
    float max=T[0];
    for (int i = 1; i < count; i++)
    {
        if (max <= T[i])
        {
            max=T[i];
        }     
    }
    return max;
}
float minimum_T(int count ,float T[]){
    float min=T[0];
    for (int i = 1; i < count; i++)
    {
        if (min >= T[i])
        {
            min=T[i];
        }     
    }
    return min;
}
void renvoyer_inverse(int count,float T[]){
    int j = count-1;
    printf("Tableau inverse\n");
    for (int i = j; i >= 0; i--)
    {
        printf("%.2f ",T[i]);
       
    }
  puts("");  
}