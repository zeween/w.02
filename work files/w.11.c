#include <stdio.h>

int main() {
    int height, i, j, space;

    printf("Enter the height of the pyramid: ");
    scanf("%d", &height);

    for (i = 1; i <= height; i++) {
        // Print spaces
        for (space = 1; space <= height - i; space++) {
            printf(" ");
        }
        // Print stars
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        // Move to the next line
        printf("\n");
    }

    return 0;
}
