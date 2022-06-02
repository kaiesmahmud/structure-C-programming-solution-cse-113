//Write a C program to find out the sum of series of 1^2 + 2^2 + 3^2 + .... + n^2

#include<stdio.h>
int main(){
    int n, sum =0 ;

    printf(" Input the number : ");
    scanf("%d",&n );

    for( int i=1 ; i <= n ; i++)
    {
      sum += (i*i) ;
      i == n ? printf(" %d ",i*i) :  printf(" %d +",i*i);
    }
    printf(" \n The sum of series is %d",sum );

    return 0 ;
}



