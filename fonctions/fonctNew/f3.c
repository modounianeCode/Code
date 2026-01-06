#include<stdio.h>
#include<math.h>
int puissance(int a, int b){
    return pow(a, b);
}
int main(){
    int a,b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    int result = puissance(a, b);
    printf("Result of %d raised to the power of %d: %d\n", a, b, result);
    printf("End of program.\n");
    // This line indicates the end of the program.
    return 0;
}