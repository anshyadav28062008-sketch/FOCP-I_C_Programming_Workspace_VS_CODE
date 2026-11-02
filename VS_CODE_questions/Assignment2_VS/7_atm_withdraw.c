// C program to make a mini atm fow withdrawing cash under certain conditions
#include <stdio.h>
int main()
{
    int pin, amount, balance;

    printf("enter the PIN:");
    scanf("%d", &pin);

    printf("\nenter the amount:");
    scanf("%d", &amount);

    printf("the balance is:");
    scanf("%d", &balance);

    if (pin != 1234)
        printf("Invalid PIN");

    else
    {
        if (amount <= 0 || amount % 100 != 0)
            printf("Invalid Amount");

        else
        {
            if (amount > balance)
                printf("Insufficiant Balance");

            else
                printf("Withdrawl Successful");
        }
    }
    return 0;
}