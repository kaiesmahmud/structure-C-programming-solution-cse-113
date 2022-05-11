//Write a C program to find if a year  is Leap year or not  using ternary operator

#include<stdio.h>
int main()
{
    int y;
    printf(" \n Enter a year : ");
    scanf("%d",&y);

    y % 4 == 0 && y % 400 == 0 || y % 100 != 0  ?
     printf(" \n \t %d is Leap Year ! , Hurrahh \n",y)
     : printf(" \n \t %d is NOT Leap Year ! , Alas",y);

    return 0 ;
}

