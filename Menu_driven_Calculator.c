
#include <stdio.h>

float add(float a, float b) {
    return a  b
}

float subtract(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    return a / b;
}

int main() {
    float num1, num2, result;
    int choice;

    printf("\n===== SMART CALCULATOR =====\n");
    printf("1. Addition (+)\n");
    printf("2. Subtraction (-)\n");
    printf("3. Multiplication (*)\n");
    printf("4. Division (/)\n");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    switch(choice) {
        case 1:
            result = add(num1, num2);
            break;

        case 2:
            result = subtract(num1, num2);
            break;

        case 3:
            result = multiply(num1, num2);
            break;

        case 4:
            if(num2 == 0) {
                printf("Error! Division by zero is not allowed.\n");
                return 0;
            }
            result = divide(num1, num2);
            break;

        default:
            printf("Invalid choice!\n");
            return 0;
    }

    printf("\nResult = %.2f\n", result);

    return 0;
}
