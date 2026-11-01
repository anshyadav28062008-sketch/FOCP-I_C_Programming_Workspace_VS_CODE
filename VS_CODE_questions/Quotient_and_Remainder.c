//print the value of quotient and remainder

#include<stdio.h>
int main () {
    int num1,num2;      //input value
    printf("Enter the two integer value :");
        scanf("%d %d",&num1,&num2);
    printf("\nQuotient is :%d\nRemainder is :%d",num1/num2,num1%num2);
}