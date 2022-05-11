//Write a C program to calculate the profit or loss

#include<stdio.h>
int main()
{
    int buy,sell ;

    printf("\n Enter the selling rate of a  product: ");
    scanf("%d",&sell);
    printf("\n Enter the buying rate of a  product: ");
    scanf("%d",&buy);

    if (buy > sell) printf("\n Loss Amount is %d", buy-sell);
    if (buy < sell) printf("\n Profit Amount is %d",sell-buy);
    if (buy == sell) printf("\n No Profit No Loss \n");

    return 0 ;
}
