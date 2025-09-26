#include<stdio.h>
int main(){
    int count=5;
    float T[count],s=0,moy;
    int i;
    puts("Saisie des notes");
    for(i=0;i<count;i++){
        printf("Entrer T[%d]:",i+1);
        scanf("%f",&T[i]);
        s+=T[i];
    }
    moy=s/count;
    printf("La moyenne est: %.2f\n",moy);
    puts("Les notes superieures a la moyenne sont:");
    for(i=0;i<count;i++){
        if(T[i]>moy){
            printf("%.2f\n",T[i]);
        }
    }
    puts("Fin du programme");
    return 0;
}