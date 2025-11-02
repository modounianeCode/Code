#include<stdio.h>
#include<math.h>
void equation_du_second_degre(int a,int b, int c);
int main(){
    int a,b,c;
    printf("Entrer les coefficients de l'equation (a,b,c) : ");
    scanf("%d%d%d",&a,&b,&c);
    printf("L'equation est : %dx^2+%dx+%d=0\n",a,b,c);
    equation_du_second_degre(a,b,c);
    return 0;
}
void equation_du_second_degre(int a,int b, int c){
    if (a == 0)
    {
        puts("L'equation n'admet pas de solution car a = 0");
    }
    float delta,x1,x2,x0;
    delta = (pow(b,2) - (4 * a * c));
    while (a != 0)
    {
        if (delta > 0)
    {
        x1 = ((-b - sqrt(delta))/(2 * a));
        x2 = ((-b + sqrt(delta))/(2 * a));
        puts("L'equation  admet deux solutions : ");
        printf("%f\t%f\n",x1,x2);                                                                                                                                                                                                                                                                                                                                                                                                                                                                   
    } 
    else if (delta == 0)
    {
        x0 = (-b / (2*a));
        printf("L'equation admet une unique solution xo = %f\n",x0);
    }
    else{
       printf("L'equation n'admet pas de solution dans |R\n");
    }
    break;
    }
}