// Write a C program to find sum of series of 1/1! + 2/2! +.. .. + n/n!

#include<stdio.h>
int main(){
    int n,j,k;
    float sum = 0.0;
    printf(" Input the number : ");
    scanf("%d",&n );

    for( int i=1 ; i <= n ; i++)
    {
        j=1 ;
        k = i ;
          while(k>0)
          {
              j *= k;
              k--;
          }
        printf(" %d / %d + ",i ,j);
        sum = sum + (i / j) ;

    }
    printf(" \n The sum of series is %f \n",sum );

    return 0 ;
}



