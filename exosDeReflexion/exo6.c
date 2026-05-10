#include<stdio.h>
int main(){
	int taille;
	printf("Entrer la taille du tableau : ");
	scanf("%d",&taille);
	int tab[taille];
	puts("Saisie des elements du tableau");
	printf("elm1 : ");
	scanf("%d",&tab[0]);
	for ( int k = 1; k < taille; k++)
	{
	printf("elm %d :",k+1);
	if (tab[k-1]>tab[k]){
	do{
		printf("Saisissez un nombre plus grand\n");
		scanf("%d",&tab[k]);
	}while(tab[k-1]>tab[k]);
	}
	else{
		tab[k]=tab[k];
	}
	}

	for (int i = 0; i < taille; i++)
	{
		printf("%d |",tab[i]);
	}
	return 0;
}