#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,sum,x,org;
    sum=0;
    printf("Enter an integer\n");
    scanf("%d",&n);
    org=n;
    while (0<n)
    {
        x=n%10;
        n=n/10;
        sum=sum+x;
    }
    printf("The sum of the integer of %d is : %d",org,sum);
    return 0;
}
