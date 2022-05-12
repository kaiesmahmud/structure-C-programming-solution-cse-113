//Write a C program to find maximum between two numbers using switch case

#include<stdio.h>
int main()
{
    int a,b ;
    printf("\n Enter first  number : ");
    scanf("%d",&a);
    printf("\n Enter second number : ");
    scanf("%d",&b);

    switch(a > b)
    {
    case 0:
        switch(a==b)
        {
        case 1 :
            printf("\n %d = %d \n both number is equal !\n",a,b);
            break;
        case 0:
            printf("\n %d < %d \n so the maximum number is %d \n",a,b,b);
            break;
        }
        break;
    case 1:
        printf("\n %d > %d \n so the maximum number is %d \n",a,b,a);
        break;

    }
    return 0 ;
}
