// C program to calculate electricity bill based on unit consumption
#include <stdio.h>
int main()
{
    int units, bill;
    printf("the units consumed are:");
    scanf("%d", &units);

    if (units <= 100)
    {
        bill = units * 2;
        printf("\nthe total bill is %d", bill);
    }

    else if (units <= 200)
    {
        bill = 200 + (units - 100) * 3;
        printf("\nthe total bill is %d", bill);
    }

    else
    {
        bill = 500 + (units - 200) * 5;
        printf("\n the total bill is %d", bill);
    }
    return 0;
}