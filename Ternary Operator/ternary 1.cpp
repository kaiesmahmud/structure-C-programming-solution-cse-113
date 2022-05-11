//Write a C program to find maximum and minimum among 3 numbers  - using ternary Operator

#include<stdio.h>
int main()
{
    int a,b,c ;

    printf(" \n Enter First Value : ");
    scanf("%d",&a);
    printf(" \n Enter Second Value : ");
    scanf("%d",&b);
    printf("\n Enter First Value : ");
    scanf("%d",&c);

    // finding Maximum Number
    ( a > b &&  a > c )?
    printf("\n The Maximum value is %d ",a)
    : ( b > c ?
        printf("\n The Maximum value is %d ",b)
        : printf("\n The Maximum value is %d ",c));

    // finding Minimum Number
    ( a < b &&  a < c )?
    printf("\n The Minimum value is %d ",a)
    : ( b < c ?
        printf("\n The Minimum value is %d ",b)
        : printf("\n The Minimum value is %d ",c));

    return 0 ;
}
