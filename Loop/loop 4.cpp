//Write a C program to sum of all odd numbers between 1 to n

#include<stdio.h>
int main(){
    int n , sum = 0 ;
    scanf("%d",&n);

    for(int i = 1 ; i <= n ; i+=2)
    {
        printf(" %d ", i);
        sum += i ;
    }
        printf(" =  %d ", sum);

    return 0 ;
}
