//Display the student information
#include<stdio.h>
int main() {
    char name[10];              //take 1 extra for space at last
    int age;
    float percentage;
    char grade;
        printf("Enter your name:");
            scanf("%s",&name);
        printf("\nEnter your age:");
            scanf("%d",&age);
        printf("\nEnter your percentage:");
            scanf("%f",&percentage);
        printf("\nEnter your grade:");
            scanf(" %c",&grade);
//printing all value
        printf("Name :%s\nAge :%d\nPercentage :%.2f\nGrade :%c",name,age,percentage,grade);
}