// Simple Bill Calculation 
#include<stdio.h>
int main() {
    float price;            //price of an item
    int quantity;

        printf("Price of a item :");
            scanf("%f",&price);
        printf("\nQuantity of items :");
            scanf("%d",&quantity);
        printf("Total Bil :%.2f",price*quantity);
}