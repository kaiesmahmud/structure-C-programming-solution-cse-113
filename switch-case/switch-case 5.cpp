//Write a C program to check whether a number is even or odd


#include<stdio.h>
int main()
{
    int a,b ;
    printf("\n Enter first  number : ");
    scanf("%d",&a);


    switch(a % 2 == 0)
    {
    case 0:
        printf("\n %d is Odd number \n",a);
        break;
    case 1:
        printf("\n %d is Even number \n",a);
        break;

    }
    return 0 ;
}
