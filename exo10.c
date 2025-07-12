#include<stdio.h>
#include<math.h>
int main(){
    int xa, ya, xb, yb;
    double distance;
    printf("Saisissez les coordonnees du premier point A(xa , ya) : ");
    scanf("%d %d", &xa, &ya);
    printf("Saisissez les coordonnees du second point B(xb , yb) : ");
    scanf("%d %d", &xb, &yb);
    distance = sqrt(pow(xb - xa, 2) + pow(yb - ya, 2));
    printf("A(%d, %d) B(%d, %d)\n", xa, ya, xb, yb);
    printf("La distance entre A et B est : %.2f\n", distance);
    return 0;
}