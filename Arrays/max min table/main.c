#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,T[100],max,min;
    printf("How many integers do you want to enter\n");
    scanf("%d",&n);
    for (i = 0;i < n;i++)
    {
        printf("Enter your number\n");
        scanf("%d",&T[i]);
    }
    max=T[0];
    min=T[0];
    for (i = 0;i < n;i++)
    {
        if (T[i]<min)
        {
            min=T[i];
        }
        if (T[i]>max)
        {
            max=T[i];
        }
    }
    printf("The maximum is :%d and The minimum is :%d\n",max,min);
    return 0;
}
