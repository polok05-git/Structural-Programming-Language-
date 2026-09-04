#include<stdio.h>
int main(){
    int itemPrice,shippingCost,sum;
    printf("ItemPrice=\n");
    scanf("%d",&itemPrice);
    printf("ShippingCost=\n");
    scanf("%d",&shippingCost);
    {
       sum = itemPrice + shippingCost;
    }
    printf("Sum=%d",sum);
    return 0;
}