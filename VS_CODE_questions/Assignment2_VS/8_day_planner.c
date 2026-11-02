// C program to find the week day is working or weekend
#include <stdio.h>
int main()
{
    int day;

    printf("enter the day:");
    scanf("%d", &day);

    switch (day)
    {
    case 1:
        printf(" MONDAY - WORKING DAY");
        break;

    case 2:
        printf("TUESDAY - WORKING DAY");
        break;

    case 3:
        printf("WEDNESDAY - WORKING DAY");
        break;

    case 4:
        printf("THURSDAY - WORKING DAY");
        break;

    case 5:
        printf("FRIDAY - WORKING DAY");
        break;

    case 6:
        printf("SATURDAY - WEEKEND");
        break;

    case 7:
        printf("SUNDAY - WEEKEND");
        break;

    default:
        printf("INVALID INPUT");
    }
    return 0;
}