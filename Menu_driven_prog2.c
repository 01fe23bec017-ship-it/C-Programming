#include<stdio.h>
#include<math.h>
int main()
{
    int ch;
    float n, a, b, x, result;

    printf("MENU\n");
    printf("-------\n");
    printf("1. Square Root\n");
    printf("2. Power\n");
    printf("3. Sin\n");
    printf("4. Cos\n");

    printf("Enter your choice (1-4): ");
    scanf("%d", &ch);

    if(ch == 1)
    {
        printf("Enter a number: ");
        scanf("%f", &n);

        result = sqrt(n);
        printf("Square Root = %f", result);
    }
    else if(ch == 2)
    {
        printf("Enter base and power: ");
        scanf("%f %f", &a, &b);

        result = pow(a, b);
        printf("Power = %f", result);
    }
    else if(ch == 3)
    {
        printf("Enter angle: ");
        scanf("%f", &x);

        result = sin(x);
        printf("Sin = %f", result);
    }
    else if(ch == 4)
    {
        printf("Enter angle: ");
        scanf("%f", &x);

        result = cos(x);
        printf("Cos = %f", result);
    }
    else
    {
        printf("Invalid Choice");
    }
}
