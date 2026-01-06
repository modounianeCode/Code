#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>
int racine(int a){
    if (a < 0) {
        printf("Error: Cannot compute square root of a negative number.\n");
        return -1; // Return -1 to indicate an error
    }
    return sqrt(a);
}
// This function takes an integer as input and returns its square root.
int main(){
    int a;
    printf("Enter an integer: ");
    scanf("%d", &a);
    int result = racine(a);
    if (result != -1) {
        printf("Square root: %d\n", result);
    }
    else {
        printf("Square root: Undefined (negative input)\n");
    }
    printf("End of program.\n");
    // This line indicates the end of the program.
    return 0;
}