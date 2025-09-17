#include<stdio.h>
int main(){
    float note1,note2,note3;
    float moyenne,s;
    printf("Saisir 3 notes : ");
    scanf("%f%f%f",&note1,&note2,&note3);
    s=note1+note2+note3;
    moyenne=s/3;
    printf("La moyenne est : %f\n",moyenne);
    if (moyenne < 10)
    {
      printf("Votre mention est Insuffisant\n");  
    }
    else if (moyenne>=10 && moyenne<12)
    {
        printf(" Votre mention est Passable\n");
    }
    else if (moyenne>=12 && moyenne < 14)
    {
        printf("Votre mention est Assez Bien\n");
    }
    else if (moyenne>=14 && moyenne<16)
    {
        printf("Votre mention est Bien\n");
    }
    else
        printf("Votre mention est Tres Bien\n");
    return 0;
}