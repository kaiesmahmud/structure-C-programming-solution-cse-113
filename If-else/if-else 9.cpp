//Write a C program to input a month number and print number of days in that month

#include<stdio.h>
int main()
{
    int n ;
    printf("\n Enter a Month number : ");
    scanf("%d",&n);

    if(n>0 && n < 13)
    {
        if(n==1) printf("\n January Month has 31 days \n");
        if(n==2) printf("\n February Month has 28 days \n");
        if(n==3) printf("\n March Month has 31 days \n");
        if(n==4) printf("\n April Month has 30 days \n");
        if(n==5) printf("\n May Month has 31 days \n");
        if(n==6) printf("\n June Month has 30 days \n");
        if(n==7) printf("\n July Month has 31 days \n");
        if(n==8) printf("\n August Month has 31 days \n");
        if(n==9) printf("\n September Month has 30 days \n");
        if(n==10) printf("\n October Month has 31 days \n");
        if(n==11) printf("\n November Month has 30 days \n");
        if(n==12) printf("\n December Month has 31 days \n");
    }
    else
    {
        printf("\n Enter valid Month number between 1-12 \n");
    }

    return 0 ;
}
