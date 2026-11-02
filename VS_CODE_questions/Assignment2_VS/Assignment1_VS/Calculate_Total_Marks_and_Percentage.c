//Calculate Total Marks and Percentage

#include<stdio.h>
int main() {
    int sub1,sub2,sub3,sub4,sub5;           
    int total;
    float percentage;
    printf("Enter the marks of 5 subject out of 100 :");
        scanf("%d %d %d %d %d",&sub1,&sub2,&sub3,&sub4,&sub5);
        //calculation for total and percentage
    total=sub1+sub2+sub3+sub4+sub5;
    percentage=total/5.0;
    printf("\nTotal Marks :%d\nPercentage obtained :%.2f",total,percentage);
    return 0;    
}