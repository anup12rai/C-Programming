#include <stdio.h>

// Function to calculate factorial using recursion
unsigned long long factorial(int n) {
    // Base case
    if (n == 0) {
        return 1;
    }
    // Recursive case
    return n * factorial(n - 1);
}

int main() {
    int number;
    
    printf("Enter a non-negative integer: ");
    scanf("%d", &number);
    
    // Check for negative input
    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
 
        unsigned long long result = factorial(number);
        printf("Factorial of %d is %llu\n", number, result);
    }
    
    return 0;
}