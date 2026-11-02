// Classify a triangle using its three interior angles.
#include <stdio.h>

int main(void)
{
    int a, b, c;

    printf("Enter the three angles of a triangle: ");
    if (scanf("%d %d %d", &a, &b, &c) != 3) {
        fprintf(stderr, "Invalid input. Enter three integers.\n");
        return 1;
    }

    if (a <= 0 || b <= 0 || c <= 0 || a + b + c != 180) {
        printf("Invalid triangle angles.\n");
    } else if (a == 90 || b == 90 || c == 90) {
        printf("Triangle is right-angled.\n");
    } else if (a < 90 && b < 90 && c < 90) {
        printf("Triangle is acute.\n");
    } else {
        printf("Triangle is obtuse.\n");
    }

    return 0;
}