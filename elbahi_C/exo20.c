#include<stdio.h>
int main(){
    int a,b;
    char operator;
    printf("Saisir un entier : ");
    scanf("%d",&a);
    printf("Entrer l'operateur voulu (+,-,*,/): ");
    scanf(" %c",&operator);
    printf("Saisir un autre entier : ");
    scanf("%d",&b);
    switch (operator)
    {
    case '+':
        printf("%d + %d = %d\n",a,b,a+b);
        break;
    case '-':
        printf("%d - %d = %d\n",a,b,a-b);
        break;   
     case '*':
        printf("%d * %d = %d\n",a,b,a*b);
        break;    
    case '/':
        if(b==0){
            printf("La division par 0 est impossible\n");
        }
        else{
            printf("%d / %d = %d\n",a,b,a/b);
        }
        break;
    default:
        printf("L'operateur entre n'existe pas\n");
    }
    return 0;
}