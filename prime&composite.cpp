#include <stdio.h>

int main() {
    int i, prime = 1;
    int we;

    printf("Enter the integer: ");
    scanf("%d", &we);

    if (we <= 1) {
        printf("neither prime nor composite");
        return 0;  // Exit early since number is not prime or composite
    }

    for (i = 2; i <= we / 2; i++) {
        if (we % i == 0) {
            prime = 0;
            break;
        }
    }

    if (prime) {
        printf("prime");
    } else {
        printf("compo");
    }

    return 0;
}

