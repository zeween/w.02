#include <stdio.h>
#include <string.h>

int main() {
    char correctID[] = "1234";
    char correctPassword[] = "password";
    char id[10], password[20];
    int attempts = 0;

    printf("Enter your ID: ");
    scanf("%s", id);

    if (strcmp(id, correctID) == 0) {
        while (attempts < 3) {
            printf("Enter your password: ");
            scanf("%s", password);

            if (strcmp(password, correctPassword) == 0) {
                printf("Welcome!\n");
                return 0;
            } else {
                attempts++;
                printf("You are not registered\n");
            }
        }
        printf("No more tries\n");
    } else {
        printf("You are not registered\n");
    }

    return 0;
}
