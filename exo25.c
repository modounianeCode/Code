#include<stdio.h>
int main(){
    int nbrdepart,i=0;
    printf("Saisir un nombre : ");
    scanf("%d",&nbrdepart);
    /*printf("Les 10 nombres apres %d sont : \n",nbrdepart);//utilisation de while
    while(i<=10){
        nbrdepart=nbrdepart+1;
        printf("%d ",nbrdepart);
        i++;
    }
    puts("");*/
    printf("Les 10 nombres apres %d sont : \n",nbrdepart);//utilisation de do ... while
    do
    {
        nbrdepart=nbrdepart+1;
        printf("%d ",nbrdepart);
        i++;
    } while (i<=10);
    puts("");
    return 0;
}