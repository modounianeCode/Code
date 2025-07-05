#include<stdio.h>
int main(){
    float rayon;
    const float PI = 3.14;
    float volume;
    printf("Saisissez le rayon du sphere : ");
    scanf("%f", &rayon);
    volume= (4.0/3.0) * PI * rayon * rayon * rayon;
    printf("Le volume d'un sphere de rayon r=%.2f est : %f(metre cube)\n",rayon,volume);
    return 0;
}