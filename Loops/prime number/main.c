#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    int p = 1;

    printf("Enter an integer\n");
    scanf("%d", &n);

    if (n <= 1)
    {
        p = 0;
    }

    for (i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
        {
            p = 0;
        }
    }

    if (p == 1)
    {
        printf("%d is a prime number\n", n);
    }
    else
    {
        printf("%d is not a prime number\n", n);
    }

    return 0;
}
