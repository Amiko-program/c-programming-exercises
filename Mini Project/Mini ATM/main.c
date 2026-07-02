#include <stdio.h>
#include <stdlib.h>

int main()
{
    float balance=1000,amount;
    int choice;
    printf("===== ATM MENU =====\n");
    printf("1. Check balance\n");
    printf("2. Deposit money\n");
    printf("3. Withdraw money\n");
    printf("4. Exit\n");
    printf("Choose an option :\n");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        printf("Your balance is : %.2f $\n",balance);
        break;
    case 2:
        printf("Enter the amount to deposit :\n");
        scanf("%f",&amount);
        if(amount<0)
        {
            printf("Invalid amount\n");
        }
        else
        {
        balance = balance + amount;
        printf("Your balance is : %.2f $",balance);
        }
        break;
    case 3:
        printf("Enter the amount to withdraw :\n");
        scanf("%f",&amount);
        if (amount > balance || amount < 0 )
        {
            printf("Insufficient funds or negative value\n");
        }
        else
        {
            balance = balance - amount;
            printf("Your balance is : %.2f $ \n",balance);
        }
        break;
    case 4:
        printf("Goodbye !\n");
        break;
    default:
        printf("Invalid choice");
    }
    return 0;
}
