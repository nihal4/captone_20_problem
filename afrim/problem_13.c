#include <stdio.h>

int main() {
    float num1, num2, result;
    char operator;

    
    printf("Enter the operation (e.g., 5.2 - 3): ");
    scanf("%f %c %f", &num1, &operator, &num2);

    
    switch(operator) {
        case '+':
            result = num1 + num2;
            printf("Result: %.2f\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %.2f\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %.2f\n", result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %.2f\n", result);
            } else {
                printf("Error! Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error! Invalid operator.\n");
            break;
    }

    return 0;
}
