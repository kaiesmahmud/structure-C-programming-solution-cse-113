//Write a C program to print day of week name using switch case

#include<stdio.h>
int main()
{
    int n ;
    printf("\n Enter a Week number : ");
    scanf("%d",&n);

    switch (n)
    {
    case 1 :
        printf("\n Saturday \n");
        break;
    case 2 :
        printf("\n Sunday \n");
        break;
    case 3:
        printf("\n Monday \n");
        break;
    case 4:
        printf("\n Tuesday \n");
        break;
    case 5:
        printf("\n Wednesday \n");
        break;
    case 6:
        printf("\n Thursday \n");
        break;
    case 7:
        printf("\n Friday \n");
        break;
    default:
        printf("\n Enter valid weekday between 1-7 \n");
    }

    return 0 ;
}

