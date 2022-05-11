//Write a C program to input angles of a triangle and check whether triangle is valid or not

#include<stdio.h>
int main()
{
    int a,b,c ;

    printf("\n Enter first angle of triangle : ");
    scanf("%d",&a);
    printf("\n Enter second angle of triangle : ");
    scanf("%d",&b);
    printf("\n Enter third angle of triangle : ");
    scanf("%d",&c);

    if( a > 0 && b > 0 && c > 0 )
    {
        if( a+b+c == 180 ) printf("\n The angles of Triangle is Valid ! \n");
        else printf("\n The angles of triangle is NOT Valid \n");
    }
    else printf("\n The angles of triangle is NOT Valid \n");


    return 0
     ;
}
