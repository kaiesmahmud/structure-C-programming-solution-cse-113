//Write a C program to input all the sides of triangle and check whether triangle is valid or not

#include<stdio.h>
int main()
{
    int a,b,c ;
    printf("\n Enter first side of triangle : ");
    scanf("%d",&a);
    printf("\n Enter second side of triangle : ");
    scanf("%d",&b);
    printf("\n Enter third side of triangle : ");
    scanf("%d",&c);

    if ( a+b > c && b+c > a && a+c > b )
        printf("\n The triangle is Valid \n");
    else printf("\n The triangle is NOT Valid");
    return 0 ;
}
