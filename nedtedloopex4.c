//generate the fibonanci series\\

#include<stdio.h>
int main()
{
    int n,a,b,c,i,j;
    a=0;
    b=1;

    printf("Enter number : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
            printf("%d ",a);

            c=a+b;
            a=b;
            b=c;
        }

}
