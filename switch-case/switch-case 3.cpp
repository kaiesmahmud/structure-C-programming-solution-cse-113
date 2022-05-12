//Write a C program to print total number of days in a month using switch case

#include<stdio.h>
int main()
{
    int n ;
    printf("\n Enter a Month number : ");
    scanf("%d",&n);

    switch (n)
    {
    case 1 :
        printf("\n January Month has 31 days \n");
        break;
    case 2 :
        printf("\n February Month has 28 days \n");
        break;
    case 3 :
        printf("\n March Month has 31 days \n");
        break;
    case 4 :
        printf("\n April Month has 30 days \n");
        break;
    case 5 :
        printf("\n May Month has 31 days \n");
        break;
    case 6 :
        printf("\n June Month has 30 days \n");
        break;
    case 7 :
        printf("\n July Month has 31 days \n");
        break;
    case 8 :
        printf("\n August Month has 31 days \n");
        break;
    case 9 :
        printf("\n September Month has 30 days \n");
        break;
    case 10 :
        printf("\n October Month has 31 days \n");
        break;
    case 11 :
        printf("\n November Month has 30 days \n");
        break;
    case 12 :
        printf("\n December Month has 31 days \n");
        break;
    default:
        printf("\n Enter valid Month number between 1-12 \n");
    }


    return 0 ;
}
