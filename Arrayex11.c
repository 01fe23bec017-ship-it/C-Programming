// read a square matrix and find the sum of its primary diagonal//

#include<stdio.h>
int main ()
{
    int a[3][3], i, j, sum ;
    sum=0;

    printf("Enter matrix elements:\n");

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < 3; i++)
    {
        sum += a[i][i];
    }

    printf("Sum of primary diagonal = %d", sum);

}
