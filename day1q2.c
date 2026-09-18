//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.
#include <stdio.h>
int main()
{
    int a, b, sum, dif, prod, quot;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    sum = a + b;
    dif = a - b;
    prod = a*b;
    quot = a/b;
    printf("sum: %d\n", sum);
    printf("diffrence: %d\n", dif);
    printf("product: %d\n", prod);
    printf("quotient: %d", quot);
    return 0;

}