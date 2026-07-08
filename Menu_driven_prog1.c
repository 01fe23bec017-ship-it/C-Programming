#include<stdio.h>
int main()
{
    int ch;
    float b, h, r, s, area;

    printf("MENU\n");
    printf("-------\n");
    printf("1. Area of Triangle\n");
    printf("2. Area of Circle\n");
    printf("3. Area of Square\n");

    printf("Enter your choice (1-3): ");
    scanf("%d", &ch);

    if(ch == 1)
    {
        printf("Enter base : ");
        scanf("%f ", &b);

         printf("Enter height: ");
        scanf("%f ", &h);

        area = 0.5 * b * h;
        printf("Area of Triangle = %f", area);
    }
    else if(ch == 2)
    {
        printf("Enter radius: ");
        scanf("%f", &r);

        area = 3.14 * r * r;
        printf("Area of Circle = %f", area);
    }
    else if(ch == 3)
    {
        printf("Enter side: ");
        scanf("%f", &s);

        area = s * s;
        printf("Area of Square = %f", area);
    }
    else
    {
        printf("Invalid choice");
    }
}
