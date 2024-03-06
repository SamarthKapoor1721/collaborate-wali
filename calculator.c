#include <stdio.h>

int main() {
    int num1, num2;
 char op;

    printf("Enter an operator (+, -, *,): ");
    scanf("%c",op);
    printf("Enter two operands: ");
    scanf("%d %d", &num1, &num2);

    switch(op) {
        case '+':
            printf("%d + %d = %d\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%d - %d = %d\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%d * %d = %d\n", num1, num2, num1 * num2);
            break;
        case '/':
            if(num2 != 0)
                printf("%d / %d = %.2f\n", num1, num2, (float)num1 / num2);
            else
                printf("Error! Division by zero is not allowed.\n");
            break;
        default:
            printf("Error! The operator is not correct.\n");
    }

    return 0;
}