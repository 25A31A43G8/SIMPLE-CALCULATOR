#include <stdio.h>
int main() {
    char op;  // Variable to store the operator (+, -, *, /)
    double first, second;
    printf("Enter first operand: ");
    scanf(" %lf", &first);
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);
    switch (op) {
        case '+':// Addition
            printf("Enter second operand: ");
            scanf("%lf", &second);
            printf("%g + %g = %.2g\n", first, second, first + second);
            break;
        case '-':// Subtraction
            printf("Enter second operand: ");
            scanf("%lf", &second);
            printf("%g - %g = %.2g\n", first, second, first - second);
            break;
        case '*':// Multiplication
            printf("Enter second operand: ");
            scanf("%lf", &second);
            printf("%g * %g = %.2lf\n", first, second, first * second);
            break;
        case '/':// Division
            printf("Enter second operand: ");
            scanf("%lf", &second);
            if (second != 0)// Denominator not equals to 0
                printf("%g / %g = %.2lf\n", first, second, first / second);
            else
                printf("Undefined\n");
            break;
        default:
            printf("Error! operator is not correct\n");
    }
    return 0;
}
