//Write a C program to find out the sum of series of 1 + 2 + 3 + .... + n

#include<stdio.h>
int main(){
    int n, sum =0 ;

    printf(" Input the number : ");
    scanf("%d",&n );

    for( int i=1 ; i <= n ; i++)
    {
      sum += i ;
      i == n ? printf(" %d ",i) :  printf(" %d +",i);
    }
    printf(" \n The sum of series is %d",sum );

    return 0 ;
}


