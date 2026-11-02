// C program that takes an integer and tells integer is odd, even or special
#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d", &num);

    if (num % 2 == 0 && num % 5 == 0)
        printf("\nthe number %d is special", num);

    else if (num % 2 == 0)
        printf("\nthe number %d is even", num);

    else if (num % 5 == 0)
        printf("\nthe number %d is five", num);

    else
        printf("the number %d is odd", num);

    return 0;
}