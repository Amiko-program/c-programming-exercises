#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,mul;
    printf("Enter a number\n");
    scanf("%d",&n);
    for (i = 1;i <= 10;i++)
    {
        mul=n*i;
        printf("%dx%d=%d\n",n,i,mul);
    }
    return 0;
}
