// Basic calculator using a switch statement.
#include <stdio.h>

int main(void)
{
    float a, b;
    char sign;

    printf("Enter two numbers: ");
    if (scanf("%f %f", &a, &b) != 2) {
        fprintf(stderr, "Invalid numeric input.\n");
        return 1;
    }

    printf("Enter an operator (+, -, *, /, %%): ");
    if (scanf(" %c", &sign) != 1) {
        fprintf(stderr, "Could not read the operator.\n");
        return 1;
    }

    switch (sign) {
        case '+':
            printf("Result: %.2f\n", a + b);
            break;
        case '-':
            printf("Result: %.2f\n", a - b);
            break;
        case '*':
            printf("Result: %.2f\n", a * b);
            break;
        case '/':
            if (b == 0.0f) {
                fprintf(stderr, "Error: division by zero is not allowed.\n");
                return 1;
            }
            printf("Result: %.2f\n", a / b);
            break;
        case '%': {
            int x = (int)a;
            int y = (int)b;
            if (a != (float)x || b != (float)y) {
                fprintf(stderr, "Modulo requires whole-number operands.\n");
                return 1;
            }
            if (y == 0) {
                fprintf(stderr, "Error: modulo by zero is not allowed.\n");
                return 1;
            }
            printf("Remainder: %d\n", x % y);
            break;
        }
        default:
            fprintf(stderr, "Unknown operator: %c\n", sign);
            return 1;
    }

    return 0;
}