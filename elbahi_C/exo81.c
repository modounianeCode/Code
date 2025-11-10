#include<stdio.h>
int main(){
    /*int nombre,*ptr = &nombre;
    int nbdiv = 0;
    printf("Entrer un nombre : ");
    scanf("%d",&nombre);
    for (int i = 1; i <= *ptr; i++)
    {
        if (*ptr % i == 0)
        {
            nbdiv++;
        }
        
    }
    if (nbdiv == 2)
    {
        printf("%d est un nombre premier\n",*ptr);
        printf("Son adresse est %p\n",ptr);
    }
    else{
        printf("%d n'est pas un nombre premier\n",*ptr);
        printf("Son adresse est %p\n",ptr);
    }
        */
       int nbr, *p = &nbr;
    printf("Entrer un nombre entier : ");
    scanf("%d",p);
    if (*p % 2 == 0)
    {
        printf("%d est un nombre pair\n",*p);
    }
    else
    {
        printf("%d est un nombre impair\n",*p);
    }
    return 0;
}