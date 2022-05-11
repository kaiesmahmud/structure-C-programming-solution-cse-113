//Write a C program to enter any number and calculate it's factorials
#include<stdio.h>
int main(){
    int i,f=1,n;

    printf(" Input the number : ");
    scanf("%d",&n);

    for( i=1 ; i <= n ; i++)
    {
      f *= i;
    }

    printf("The Factorial of %d is: %d \n",n,f);

    return 0 ;
}

