#include <stdio.h>

int main() {
    double num1, num2;
    char operation;

    // Prompt user to input the first number
    printf("Enter the first number: ");
    scanf("%lf", &num1);

    // Prompt user to input the second number
    printf("Enter the second number: ");
    scanf("%lf", &num2);

    // Prompt user to choose an operation
    printf("Choose an operation (+, -, *, /): ");
    scanf(" %c", &operation); // The space before %c is important to consume any leftover newline character

    // Perform the calculation based on the chosen operation
    switch (operation) {
        case '+':
            printf("Result: %.2lf\n", num1 + num2);
            break;
        case '-':
            printf("Result: %.2lf\n", num1 - num2);
            break;
        case '*':
            printf("Result: %.2lf\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("Result: %.2lf\n", num1 / num2);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid operation.\n");
            break;
    }

    return 0;
}

