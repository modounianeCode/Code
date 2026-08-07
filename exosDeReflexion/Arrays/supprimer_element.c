#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int search(int *tab,int taille,int element_a_rechercher);
int *supprimer(int *tab,int *taille,int element_a_supprimer);
void afficher(int *tab,int count);
int main(){
    int i,element_to_delete;
    int N;
    printf("Saisir la taille du tableau: ");
    scanf("%d",&N);
    int *tab = (int*)malloc(N * sizeof(int));
    printf("Remplissage du tableau\n");
    for ( i = 0; i < N; i++)
    {
        printf("El %d: ",i+1);
        scanf("%d",&tab[i]);
    }
    printf("Entrer l'element a supprimer: ");
    scanf("%d",&element_to_delete);
    int *nouveau_arr = supprimer(tab,&N,element_to_delete);
    afficher(nouveau_arr,N);
    return 0;
}
int search(int *tab,int taille,int element_a_supprimer){
    for (int i = 0; i < taille; i++)
    {
        if (tab[i] == element_a_supprimer)
        {
            return i;
        }
    }
    return -1;
}
int* supprimer(int *tab,int *taille,int element_a_supprimer){
    int indice = search(tab,*taille,element_a_supprimer);
    if (indice == -1) return tab;
    *taille = *taille - 1;
    int *nouveau_tab = (int*)malloc((*taille) * sizeof(int));
    int i=0;
    while(i < indice){
        nouveau_tab[i]=tab[i];
        i++;
    }
    for(i = indice ;i < *taille; i++){
        nouveau_tab[i] = tab[i+1];
    }
    return nouveau_tab;
}
void afficher(int *tab,int count){
    printf("Affichage du tableau\n");
    for (int i = 0; i < count; i++)
    {
        printf("%d |",tab[i]);
    }
    puts("");
}