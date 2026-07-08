
#include<stdio.h>
#include<math.h>

int main ()
{
    int n ;
    float cube_root;

    printf("Enter a number :");
    scanf("%d", &n);

    cube_root = cbrt(n);
    printf("Cube_root = %f",cube_root);
}

