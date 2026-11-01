// Employee Salary Calculation
#include<stdio.h>
int main() {
    float Basic_Salary,Allowance,Bonus;
    printf("Enter Basic Salary :");
        scanf("%f",&Basic_Salary);
    printf("\nEnter Allowance :");
        scanf("%f",&Allowance);
    printf("\nEnter Bonus :");
        scanf("%f",&Bonus);
    //Final Salary
    printf("\nFinal Salary :%.2f",Basic_Salary+Allowance+Bonus);
}