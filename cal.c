#include <stdio.h>

float add(float num1, float num2) {
    return num1 + num2;
}

float subtract(float num1, float num2) {
    return num1 - num2;
}

float multiply(float num1, float num2) {
    return num1 * num2;
}

float divide(float num1, float num2) {
    if (num2 == 0) {
        printf("Error: Division by zero is not allowed.\n");
        return 0;
    }
    return num1 / num2;
}

int main() {
    float num1, num2;
    char operator;

    printf("Simple Calculator Program\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    printf("Enter your choice (1-4): ");
    scanf("%c", &operator);

    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    switch (operator) {
        case '1':
            printf("%.2f + %.2f = %.2f\n", num1, num2, add(num1, num2));
            break;
        case '2':
            printf("%.2f - %.2f = %.2f\n", num1, num2, subtract(num1, num2));
            break;
        case '3':
            printf("%.2f * %.2f = %.2f\n", num1, num2, multiply(num1, num2));
            break;
        case '4':
            printf("%.2f / %.2f = %.2f\n", num1, num2, divide(num1, num2));
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}