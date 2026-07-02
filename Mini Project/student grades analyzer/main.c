#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,n,b,pass,fail,found,index;
    float avg,T[100],x,max,min,change;
    printf("Enter the numbers of students between 1 and 100\n");
    scanf("%d",&n);
    for (i = 0;i < n;i++)
    {
        printf("Enter a grade between 0 and 20\n");
        scanf("%f",&T[i]);
        while(T[i]<0 || T[i]>20)
        {
            printf("Error! Enter a grade between 0 and 20:\n");
            scanf("%f",&T[i]);
        }

    }

    max=T[0];
    min=T[0];
    avg=0;
    fail=0;
    pass=0;
    found=0;
    index=0;
    for (i = 0;i < n;i++)
    {
        printf("%.2f\n",T[i]);
        if (T[i]<min)
        {
            min=T[i];
        }
        else if (T[i]>max)
        {
            max=T[i];
        }
        avg=avg+T[i];
        if (T[i]<10)
        {
            fail=fail+1;
        }
        else
        {
            pass=pass+1;
        }
    }
    avg=avg/n;
    printf("The average grade is:%.2f\n",avg);
    printf("The highest grade is :%.2f\n",max);
    printf("The lowest grade is :%.2f\n",min);
    printf("Passed students : %d\n",pass);
    printf("Failed students : %d\n",fail);
    printf("Enter a grade to search\n");
    scanf("%f",&x);
    for (i = 0;i < n;i++)
    {
        if (x==T[i])
        {
            index=i;
            found=1;
            break;
        }
    }
    if (found==1)
    {
        printf("%.2f is found at index %d\n",x,index);
    }
    else
    {
        printf("%.2f not found\n",x);
    }
    for (i = 0;i < n; i++)
    {
        for(j=i+1;j < n; j++)
        {
            if (T[i]>T[j])
            {
                change=T[i];
                T[i]=T[j];
                T[j]=change;
            }
        }
        printf("%.2f\n",T[i]);
    }

    return 0;
}
