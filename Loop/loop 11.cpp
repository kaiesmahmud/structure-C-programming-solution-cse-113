//Write a C program to calculate product of digits of any number

#include<stdio.h>
int main(){
    int n ,sum = 1 ;

    scanf("%d",&n);

    for( ; n >= 1 ;)
    {
        sum *=(n % 10) ;
        n /=10;
    }
    printf(" %d ",sum );

    return 0 ;
}
