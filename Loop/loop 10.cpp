//write a C program to calculate sum of digits of any number --while loop

#include<stdio.h>
int main(){
    int n ,sum = 0 ;

    scanf("%d",&n);

    while( n >= 1 )
    {
        sum +=(n % 10) ;
        n /=10;
    }
    printf(" %d ",sum );
    return 0 ;
}
