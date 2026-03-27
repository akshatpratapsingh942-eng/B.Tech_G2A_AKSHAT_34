#include <stdio.h>

int main()
{
    int a, b, choice;

    printf("1 - Add\n");
    printf("2 - Subtract\n");
    printf("3 - Multiply\n");
    printf("4 - Divide\n");
    printf("5 - Modulus\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter first number (a): ");
    scanf("%d", &a);

    printf("Enter second number (b): ");
    scanf("%d", &b);

    switch(choice)
    {
        case 1:
            printf("Sum = %d", a + b);
            break;

        case 2:
            printf("Difference = %d", a - b);
            break;

        case 3:
            printf("Multiplication = %d", a * b);
            break;

        case 4:
            if (b != 0)
                printf("Division = %d", a / b);
            else
                printf("Error: Division by zero!");
            break;

        case 5:
            if (b != 0)
                printf("Modulus = %d", a % b);
            else
                printf("Error: Modulus by zero!");
            break;

        default:
            printf("Invalid choice!");
    }

    return 0;
}