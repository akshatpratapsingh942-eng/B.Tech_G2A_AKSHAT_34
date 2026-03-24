#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    if (num1 == num2) {
        printf("The numbers are equal: %d\n", num1);
    } else {
        printf("The numbers are not equal: %d and %d\n", num1, num2);
    }

    return 0;
}