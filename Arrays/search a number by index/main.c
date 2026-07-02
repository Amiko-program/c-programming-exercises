#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,T[100],x,found,index;
    found = 0;
    printf("How many numbers do you want to enter\n");
    scanf("%d",&n);
    for (i = 0;i < n;i++)
    {
        printf("Enter your number\n");
        scanf("%d",&T[i]);
    }
    printf("Enter the number to search\n");
    scanf("%d", &x);
    for (i = 0;i<n;i++)
    {
        if (x==T[i])
        {
            found = 1;
            index = i;
            break;
        }

    }
    if (found == 1)
    {
        printf("Found at index :%d\n",index);
    }
    else
    {
        printf("Not found\n");
    }
    return 0;
}
