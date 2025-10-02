#include<stdio.h>
int main(){
    int T[7],element,pos,i;
    int n=5;
    puts("Remplissage du tableau");
    for ( i = 0; i < n; i++)
    {
        printf("T[%d]:",i);
        scanf("%d",&T[i]);
    }
    puts("");
    printf("Entrer l'element a inserer dans le tableau : ");
    scanf("%d",&element);
    printf("Entrer la position specifique de l'element : ");
    scanf("%d",&pos);
    puts("Tableau avant insertion");
    for ( i = 0; i < n; i++)
    {
        printf("%d\t",T[i]);
    }
    for ( i = 0; i < n; i++)
    {
      if(i==pos){
        for (int j = n; j > i ;j--)
        {
            T[j]=T[j-1];
        }
        T[i]=element;
        (n)++;  
      }
      else{
        printf("\nLa position est invalide");
        break;
      }
    }
    puts("");
    puts("Tableau apres insertion");
    for ( i = 0; i < n; i++)
    {
        printf("%d\t",T[i]);
    }
    puts("");
    return 0;
}