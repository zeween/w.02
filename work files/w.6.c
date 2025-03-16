#include <stdio.h>
#include <stdlib.h>

int main() {
    int answer;
    while (1) {
        printf("Enter the result of 3 x 4: ");
        scanf("%d", &answer);

        if (answer == 12) {
            printf("Thanks\n");
            break;
        } else {
            printf("Try again\n");
        }
    }

    return 0;
}
