// C program to find the middle number from 3 inputs using if-else statement
#include <stdio.h>
int main()

{
    int a, b, c;
    printf("input the integers:");
    scanf("%d %d %d", &a, &b, &c);

    if ((a > b && a < c) || (a < b && a > c))
        printf("the middle term is %d", a);

    else if ((b > a && b < c) || (a > b && b > c))
        printf("the middle term is %d", b);

    else
        printf("the middle term is %d", c);

    return 0;
}