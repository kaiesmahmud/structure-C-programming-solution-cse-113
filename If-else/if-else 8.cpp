// Write a C program to input week number a print week day

#include<stdio.h>
int main()
{
    int n ;
    printf("\n Enter a Week number : ");
    scanf("%d",&n);

    if(n>0 && n < 8)
    {
        if(n==1) printf("\n Saturday \n");
        if(n==2) printf("\n Sunday \n");
        if(n==3) printf("\n Monday \n");
        if(n==4) printf("\n Tuesday \n");
        if(n==5) printf("\n Wednesday \n");
        if(n==6) printf("\n Thursday \n");
        if(n==7) printf("\n Friday \n");
    }
    else
    {
        printf("\n Enter valid weekday between 1-7 \n");
    }

    return 0 ;
}
