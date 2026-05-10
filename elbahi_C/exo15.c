#include<stdio.h>
int main(){
    int age;
    printf("Saisissez votre age : ");
    scanf("%d", &age);
    if (age>=6 && age<=7)
    {
        printf("vous etes en CP.\n");
    }
    else if (age>=8 && age<=9)
    {
        printf("vous etes en CE1.\n");
    }
    else if (age>=10 && age<=11)
    {
        printf("vous etes en CE2.\n");
    }
    else if (age>=12 && age<=13)
    {
        printf("vous etes en CM1.\n");
    }
    else if (age>=14 && age<=15)
    {
        printf("vous etes en CM2.\n");
    }
    else if (age>=16 && age<=17)
    {
        printf("vous etes au college.\n");
    }
    else if (age>=18 && age<=20)
    {
        printf("vous etes au lycee.\n");
    }
    else if (age>20)
    {
        printf("vous etes a l'universite.\n");
    }
    else
    {
        printf("vous n'etes pas en age d'ecole.\n");
    }   
}