// average of 3 numbers

#include<stdio.h>
int main() {
    int num1,num2,num3;         //3 integer value
    float avg;
    printf("Enter the 3 numbers :");
        scanf("%d %d %d",&num1,&num2,&num3);
    printf("Average of three numbers :%.2f",(num1+num2+num3)/3.0);
}