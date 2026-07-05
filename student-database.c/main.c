#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,m,count,j;
    float T[100],avg,max,min,search,change;
    avg=0;
    count=0;
    printf("How many grades do you want to enter ?\n");
    scanf("%d",&n);
    for (i = 1;i <= n; i++ )
    {
        printf("Enter grade %d: \n",i);
        scanf("%f",&T[i]);
        while (T[i]<0 || T[i]>20)
        {
            printf("Enter the grade again :\n");
            scanf("%f",&T[i]);
        }
    }
    max=T[1];
    min=T[1];
    printf("===== STUDENT DATABASE =====\n");
    printf("1. Display all grades\n");
    printf("2. Calculate average\n");
    printf("3. Find highest grade\n");
    printf("4. Find lowest grade\n");
    printf("5. Search a grade\n");
    printf("6. Sort grades\n");
    printf("7. Exit\n");
    scanf("%d",&m);
    switch (m)
    {
case 1:
    {
    for (i = 1;i <= n; i++)
    {
        printf("Grade %d : %.2f\n",i,T[i]);
    }
    break;
    }
case 2:
    {
    for (i = 1;i <= n; i++)
    {
        avg=avg+T[i];
    }
    avg=avg/n;
    printf("The average grade : %.2f\n",avg);
    break;
    }
case 3:
    {
    for (i = 1;i <= n; i++)
    {
        if (max < T[i])
        {
          max=T[i];
        }
    }
    printf("The highest grade : %.2f\n",max);
    break;
    }
case 4:
    {
    for (i = 1;i <= n; i++)
    {
        if (min > T[i])
        {
            min=T[i];
        }
    }
    printf("The lowest grade : %.2f\n",min);
    break;
    }
case 5:
    {
    printf("Enter a grade to search : \n");
    scanf("%f",&search);
    for (i = 1;i <= n;i++)
    {
        if (search==T[i])
        {
            count=count+1;
        printf("%.2f is found at index : %d\n",search,i);
        }
    }
    if (count>0)
    {
        printf("%.2f is founded %d times\n",search,count);
    }
    else
    {
        printf("%.2f isn't available\n",search);
    }
    break;
    }
case 6:
    {
    for (i = 1;i <= n; i++)
    {
        for (j = i+1; j <= n;j++)
        {
            if (T[i]>
                T[j])
                {
                    change=T[i];
                    T[i]=T[j];
                    T[j]=change;
                }
        }
    }
    for (i = 1;i <= n;i++)
    {
    printf("grade %d : %.2f\n",i,T[i]);
    }
    break;
    }
case 7:
    {
    printf("GOODBYE !\n");
    break;
    }
default :
    printf("Invalide choice\n");
    }
    return 0;
}
