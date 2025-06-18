#include <stdio.h>

int main() {
    int i, j, space;
    int height = 5;  // Number of layers for the tree

    // Tree top (triangle/pyramid)
    for (i = 1; i <= height; i++) {
        // Print spaces
        for (space = 1; space <= height - i; space++) {
            printf(" ");
        }

        // Print stars
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }

        printf("\n");
    }

    // Tree trunk
    for (i = 1; i <= 2; i++) {
        for (space = 1; space < height; space++) {
            printf(" ");
        }
        printf("|\n");
    }

    return 0;
}

