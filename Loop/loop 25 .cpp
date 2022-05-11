//Write a C program to find out the sum of series of 1 +(1+2) + (1+2+3)  + .... + n

#include<stdio.h>
int main(){
    int n, sum =0 ;

    printf(" Input the number : ");
    scanf("%d",&n );

    for( int i=1 ; i <= n ; i++)
    {
        printf("(");
      for(int j = 1 ; j <= i ; j++)
      {
          i == j ? printf(" %d ",j) :  printf(" %d +",j);
          sum += j ;
      }

       i == n ? printf(")") :  printf(")+");
    }
    printf(" \n\n The sum of series is %d  \n\n",sum );

    return 0 ;
}


