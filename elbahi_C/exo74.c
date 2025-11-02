#include<stdio.h>
float diametre(float r);
float surface(float r);
float perimetre(float r);
int main(){
    float rayon;
    printf("Entrer le rayon du cercle : ");
    scanf("%f",&rayon);
    printf("Le diametre du cercle est : %.3f\n",diametre(rayon));
    printf("Le perimetre du cercle est : %.3f\n",perimetre(rayon));
    printf("La surface du cercle est : %.3f\n",surface(rayon));
    return 0;
}
float diametre(float r){
    return 2 * r;
}
float surface(float r){
    const float pi = 3.14;
    return pi * r * r;
}
float perimetre(float r){
    const float pi = 3.14;
    return 2 * pi * r;
}