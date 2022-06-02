//Write a C program to calculate product of digits of any number

#include<stdio.h>
int main(){
    int n ,multi = 1 ;

    scanf("%d",&n);

    while( n >= 1 )
    {
        multi *=(n % 10) ;
        n /=10;
    }
    printf(" %d ",multi );

    return 0 ;
}
