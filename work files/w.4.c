#include <stdio.h>
#include <stdio.h>

int main() {
    float grade;
    printf("Enter your grade (in percentage): ");
    scanf("%f",&grade);

    if (grade >= 90) {
        printf("Excellent\n");
    } else if (grade >= 80) {
        printf("Very Good\n");
    } else if (grade >= 70) {
        printf("Good\n");
    } else if (grade >= 60) {
        printf("Acceptable\n");
    } else if (grade >= 50) {
        printf("Pass\n");
    } else {
        printf("Fail\n");
    }

    return 0;
}
