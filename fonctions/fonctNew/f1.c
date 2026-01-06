#include<stdio.h>
#include<stdlib.h>
int somme(int a, int b){
    return a + b;
}
// This function takes two integers as input and returns their sum.
int produit(int a, int b){
    return a * b;
}
// This function takes two integers as input and returns their product.
int difference(int a, int b){
    return a - b;
}
// This function takes two integers as input and returns their difference.
int quotient(int a, int b){
    if (b == 0) {
        printf("Error: Division by zero is not allowed.\n");
        return -1; // Return -1 to indicate an error
    }
    return a / b;
}
int main(){
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    printf("Sum: %d\n", somme(a, b));
    printf("Product: %d\n", produit(a, b));
    printf("Difference: %d\n", difference(a, b));
    int result = quotient(a, b);
    if (result != -1) {
        printf("Quotient: %d\n", result);
    }
    else {
        printf("Quotient: Undefined (division by zero)\n");
    }
    printf("End of program.\n");
    // This line indicates the end of the program.
    return 0;
}