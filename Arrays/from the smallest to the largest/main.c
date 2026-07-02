#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,T[100],j,temp;
    printf("How many number do you want to enter?\n");
    scanf("%d",&n);
    for (i = 0;i < n;i++)
    {
        printf("Enter your number\n");
        scanf("%d",&T[i]);
    }
    for (i =0 ;i < n;i++)
        {
            for (j =i + 1 ;j<n;j++)
            {


                if (T[i]>T[j])
            {
                temp=T[i];
                T[i]=T[j];
                T[j]=temp;
            }
            }
            printf("%d \n", T[i]);
        }
    return 0;
}
