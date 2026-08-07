#include<stdio.h>
void inverserTableau(int tab[],int taille){
    int *ptrd = &tab[taille-1];
    int *ptrg = tab;
    while (ptrg <= ptrd)
    {
        int tmp = *ptrg;
        *ptrg=*ptrd;
        *ptrd=tmp;
        ptrd--;
        ptrg++;
    }
}
int main(){
    
    int taille,i;
    printf("Entrer la taille du tableau: ");
    scanf("%d",&taille);
    int tab[taille];
    printf("Remplir le tableau\n");
    for(i=0;i<taille;i++){
        printf("El %d: ",i+1);
        scanf("%d",&tab[i]);
    }
    printf("Avant inversion\n");
    for(i=0;i<taille;i++){
        printf("%d |",tab[i]);
    }
    puts("");
    inverserTableau(tab,taille);
    printf("Apres inversion\n");
    for(i=0;i<taille;i++){
        printf("%d |",tab[i]);
    }
    puts("");
    return 0;
}