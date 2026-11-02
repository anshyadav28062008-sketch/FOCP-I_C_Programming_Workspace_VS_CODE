// C program for checking eligibility of students for scholarship
#include <stdio.h>

int main()
{
    int marks;
    float attendance;

    printf("Enter marks: ");
    scanf("%d", &marks);

    printf("Enter attendance: ");
    scanf("%f", &attendance);

    if (marks >= 90 && attendance >= 70)
        printf("Special Scholarship");

    else if (marks >= 75 && attendance >= 75)
        printf("Eligible");
        
    else
        printf("Not Eligible");

    return 0;
}