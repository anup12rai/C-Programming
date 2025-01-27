#include <stdio.h>

void generatePrimes(int n) {
    int count = 0;
    int num = 2;
    while (count < n) {
        int isPrime = 1;
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime == 1) {
            printf("%d ", num);
            count++;
        }
        num++;
    }
}

int main() {
    int n;

    printf("Enter the number of prime numbers to generate: ");
    scanf("%d", &n);

    generatePrimes(n);

    return 0;
}