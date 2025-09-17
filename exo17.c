#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    float x1,x2,x0,delta;
    printf("saisissez les coefficients a,b,c : ");
    scanf("%d %d %d",&a, &b, &c);
    delta = pow(b,2)-(4*a*c);
    if (delta > 0)
    {
        x1=(-b-sqrt(delta))/2*a;
        x2=(-b+sqrt(delta))/2*a;
        printf("les solutions de l'equation sont : %f et %f\n",x1,x2);
    }
    else if (delta=0)
    {
        x0=(-b/2*a);
        printf("La solution de l'equation est : %f\n",x0);
    }
    else
    printf("L'equation n'admet pas de solution\n"); 
    return 0;
}