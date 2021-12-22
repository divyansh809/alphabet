#include<stdio.h>
int main()
{ int buy_price,sell_price;
    printf("enter the price in which wholeseller has buyed:\n");
    scanf("%d",&buy_price);
    printf("enter the amount the wholeseller has sold:\n");
    scanf("%d",&sell_price);
    if(buy_price<sell_price)
    {
        printf("profit \n");
    }
    else if(buy_price>sell_price)
    {
        printf("loss \n");
    }
    else
    {
        printf("no profit no loss \n");
    }
    return 0;
}