
#include <stdio.h>

int main() {
    int arr[10], i, sum = 0;

    printf("Enter 10 integers: ");

  
    for(i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i]; // Sum of the elements
    }

    // Display the sum of the 10 integers
    printf("The sum of the 10 integers is: %d\n", sum);

    return 0;
}