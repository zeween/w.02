#include <stdio.h>

int main() {
    int num1, num2, num3;
    printf("Enter first numbers: ");
    scanf("%d",&num1);

    printf("Enter second numbers: ");
    scanf("%d",&num2);

    printf("Enter third numbers: ");
    scanf("%d",&num3);

    if (num1 >= num2 && num1 >= num3)
        {
        printf("The maximum number is: %d\n", num1);
        } else if (num2 >= num1 && num2 >= num3)
        {
        printf("The maximum number is: %d\n", num2);
        } else printf("The maximum number is: %d\n", num3);


    return 0;
}
