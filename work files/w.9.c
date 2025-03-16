#include <stdio.h>

int main() {
    int number, factorial = 1;
    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        int i = 1;
        while (i <= number) {
            factorial *= i;
            i++;
        }
        printf("Factorial of %d is: %d\n", number, factorial);
    }

    return 0;
}

