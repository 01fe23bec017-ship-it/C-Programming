#include<stdio.h>
int main()
{
    char ch;
    float a, b, result;

    printf("MENU\n");
    printf("-------\n");
    printf("A - Addition\n");
    printf("S - Subtraction\n");
    printf("M - Multiplication\n");
    printf("D - Division\n");

    printf("Enter your choice: ");
    scanf("%c", &ch);

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    if(ch == 'A')
    {
        result = a + b;
        printf("Addition = %f", result);
    }
    else if(ch == 'S')
    {
        result = a - b;
        printf("Subtraction = %f", result);
    }
    else if(ch == 'M')
    {
        result = a * b;
        printf("Multiplication = %f", result);
    }
    else if(ch == 'D')
    {
        result = a / b;
        printf("Division = %f", result);
    }
    else
    {
        printf("Invalid Choice");
    }

}
