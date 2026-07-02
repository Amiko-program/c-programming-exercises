#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,x,inv;
    inv=0;
    printf("Enter an integer\n");
    scanf("%d",&N);
    while (N>0)
    {
        x=N%10;
        N=N/10;
        inv=(inv*10)+x;
    }
    printf("%d",inv);
    return 0;
}
