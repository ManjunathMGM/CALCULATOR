#include <stdio.h>
#include <math.h>
void operation(double, double, char);
void main() // ~ program to make a simple calculator.
{

    double a, b;
    char op;

    printf("Enter the 2 values.\n");
    scanf("%lf%lf", &a, &b);

    printf("1. Enter '+' to perform addition.\n2. Enter '-' to perform subtraction.\n");
    printf("3. Enter '*' to perform multiplication\n4. Enter '/' to perform division.\n");
    printf("5. Enter '%%' to perform modulo.\n6. Enter '^' to calculate power of the number.\n");

    printf("OPERATOR - ");
    scanf(" %c", &op);

    operation(a, b, op);
}

void operation(double a, double b, char op) // ^ function to perform the operations.
{

    switch (op)
    {
    case '+':
        printf("%.2lf", a + b);
        break;
    case '-':
        printf("%.2lf", a - b);
        break;
    case '*':
        printf("%.2lf", a * b);
        break;
    case '/':
        printf("%.2lf", a / b);
        break;
    case '%':
        printf("%.2lf", fmod(a, b));
        break;
    case '^':
        printf("%.2lf", pow(a, b));
        break;
    }
}

// & THIS CODE IS WRITTEN BY MANJUNATH MGM.
