#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,i,n;
    a=0;
    b=1;
    printf("Enter an integer\n");
    scanf("%d",&n);
    if (n==1)
    {
        printf("0 ");
    }
    else if (n==2)
    {
        printf("0 1 ");
    }
    else
    {
        printf("0 ");
        printf("1 ");
    for (i = 3; i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d ",c);
    }
    }
    return 0;
}
