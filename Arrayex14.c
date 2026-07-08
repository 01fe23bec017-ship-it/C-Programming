// read a matrix and multiply every elemnt by a number entered by the user//

#include<stdio.h>
int main()
{
    int a[3][3], i, j, n;

    printf("Enter matrix elements:\n");

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("Enter a number: ");
    scanf("%d",&n);

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d ", a[i][j]* n);
        }
        printf("\n");
    }
}
