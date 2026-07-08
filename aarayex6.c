#include<stdio.h>
int main()
{
    int a[50],i,n;
    printf("enter the size of array(2-10): ");
    scanf("%d",&n);

    printf("enter the array elemnts\n ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n printing the array elemnts:");
     for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n printing the reverse elments:");
    for(i=n-1;i>=0;i--)
    {
        printf("%d\t",a[i]);
    }
    printf("\n printing the alternate elments:");
    for(i=0;i<n;i=i+2)
    {
        printf("%d\t",a[i]);
    }


}
