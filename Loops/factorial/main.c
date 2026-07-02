#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,N,fact;
    printf("Enter an integer\n");
    scanf("%d",&N);
    fact=1;
    for(i=1;i<=N;i++)
    {
        fact=i*fact;
    }
    printf("The factorial of %d is : %d",N,fact);
    return 0;
}
