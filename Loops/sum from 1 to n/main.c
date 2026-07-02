#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum,N,i;
    printf("Enter an integer\n");
    scanf("%d",&N);
    sum=0;
    for(i = 1;i<=N;i++)
    {
        sum=i+sum;
    }
    printf("The sum from 1 to %d is : %d",N,sum);

    return 0;
}
