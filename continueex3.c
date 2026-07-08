//print all prime numbers in the range of 5 to 100 and count number of primes//

#include<stdio.h>
int main()
{
    int n, j, count ;
    count=0;

    for(n = 5; n <= 100; n++)
    {
        for(j = 2; j < n; j++)
        {
            if(n % j != 0)
            {
                continue;
        }

