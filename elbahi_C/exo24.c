#include<stdio.h>
int main(){
    int nbrdpart,i;
    printf("Entrer un nombre : ");
    scanf("%d",&nbrdpart);
    printf("Les 10 nombres apres %d sont : \n",nbrdpart);
    for ( i = nbrdpart+1; i <= nbrdpart+10; i++)
    {
        printf("%d ",i);
    }
    puts("");
    /*printf("Les 50 nombres apres %d sont : \n",nbrdpart);
    for ( i = nbrdpart+1; i <= nbrdpart+50; i++)
    {
        printf("%d ",i);
    }
    puts("");
    printf("Les 50 nombres avant %d sont : \n",nbrdpart);
    for ( i = nbrdpart-1;i >= nbrdpart-50; i--)
    {
        printf("%d ",i);
    }
    puts("");*/
    return 0;
}