// C program that takes a character and print its type
#include <stdio.h>
int main()
{
    char ch;
    printf("input the character:");
    scanf(" %c", &ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' ||
        ch == 'o' || ch == 'u' || ch == 'A' ||
        ch == 'E' || ch == 'I' || ch == 'O' ||
        ch == 'U')
        printf("vowels");

    else if (ch >= '0' && ch <= '9')
        printf("digit");

    else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        printf("consonent");

    else
        printf("special character");

    return 0;
}