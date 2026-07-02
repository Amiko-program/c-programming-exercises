#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,max;
    int T[100];
    printf("How many numbers do you want to enter?\n");
    scanf("%d",&n);
    for (i = 1;i <= n;i++)
    {
        printf("Enter an number\n");
        scanf("%d",&T[i]);
    }
    max=T[1];
    for (i = 0;i <= n;i++)
    {
        if (max<T[i])
        {
            max=T[i];
        }
    }
    printf("The maximum is : %d\n",max);
    return 0;
}
