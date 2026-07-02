#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,even,odd;
    printf("Enter 10 integers\n");
    even=0;
    odd=0;
    for (i = 1;i <= 10;i++)
    {
        scanf("%d",&n);
        if (n%2==0)
        {
            even=even+1;
        }
        else
        {
            odd=odd+1;
        }
    }
    printf("There are %d odd numbers and %d even numbers\n",odd,even);
    return 0;
}
