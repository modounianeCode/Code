#include<stdio.h>
int main() {
    float tab[] = {1.5, 2.5, 3.5, 4.5, 5.5};
    int size = sizeof(tab) / sizeof(tab[0]);
    puts("Elements of the array:");
    printf("case 1: %.2f\n", tab[0]);
    printf("case 2: %.2f\n", tab[1]);
    printf("case 3: %.2f\n", tab[2]);
    printf("case 4: %.2f\n", tab[3]);
    printf("case 5: %.2f", tab[4]);
    return 0;
}