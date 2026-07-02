#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T[100],i,n,sum;
    float mean;
    sum=0;
    printf("How many numbers do you want to enter?\n");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        printf("Enter an integer\n");
        scanf("%d",&T[i]);
        sum=sum+T[i];
    }
    mean=(float)sum/n;
    printf("The mean is : %.2f\n",mean);
    return 0;
}
