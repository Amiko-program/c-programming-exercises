#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A,B,C,D;
    printf("Enter the two integer\n");
    scanf("%d",&A);
    scanf("%d",&B);
    C=A;
    D=B;
    while (A!=B)
    {
        if(A>B)
    {
        A=A-B;
    }
    if (A<B)
    {
        B=B-A;
    }
    }
    printf("PGCD(%d,%d) = %d\n",C,D,A);
    return 0;
}
