#include <stdio.h>

int main() {
    char operator;
    int num1, num2, result;

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator); // Add a space before %c to consume potential newline

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("%d + %d = %d\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("%d - %d = %d\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("%d * %d = %d\n", num1, num2, result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("%d / %d = %d\n", num1, num2, result); // Consistent formatting
            } else {
                printf("Error! Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error! Invalid operator. Please enter +, -, *, or /.\n"); // Clearer error message
            break;
    }

    return 0;
}