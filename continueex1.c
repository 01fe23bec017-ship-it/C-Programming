#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n;
    for(i=1;i<=10;i++)
    {
        printf("enter number : ",i);
        scanf("%d",&n);
        if(n!=0)
        {
            continue;
        }
        else{

           break;
        }
    }
    printf("\nThe loop is broken");
     exit(0);
    printf("\nthis will not print ");
}
