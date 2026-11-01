#include<stdio.h>
int main() {
    int num1,num2,num3=0;
    printf("Enter the two numbers :");
        scanf("%d %d",&num1,&num2);
    //print original value

    printf("\noriginal value are :%d %d",num1,num2);
    
    //print after swap

    num3=num1;
    num1=num2;
    num2=num3;
    printf("\nvalue of the number after swap :%d %d",num1,num2);
}