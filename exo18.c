#include<stdio.h>
int main(){
    int age;
    char sexe;
    printf("saisissez votre age : ");
    scanf("%d",&age);
    printf("saisissez votre sexe (H ou F) : ");
    scanf(" %c",&sexe);
    if (age > 20 && sexe=='h')
    {
        printf("Vous etes imposable\n");
    }
    else if (age>=18 && age<=35 && sexe=='f')
    {
      printf("Vous etes imposable\n");
    }
    else
      printf("Vous n'etes pas imposable\n");
    return 0;   
}