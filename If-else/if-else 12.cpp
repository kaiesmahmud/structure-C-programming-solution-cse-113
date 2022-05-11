//Write a C program to check whether the triable is equilateral , isoscales or scalene triangle

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

    if ( a== b && b == c)
        printf("\n The triangle is equilateral \n");
    else if (a== b || a== c || b==c)
        printf("\n The triangle is isoscales \n");
    else
        printf("\n The triangle is scalene \n");
    return 0 ;
}
