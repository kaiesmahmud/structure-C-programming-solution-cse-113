//write a C program to print sum of all even numbers between 1 to n
#include<stdio.h>
int main(){
    int n,sum = 0 ;
    scanf("%d",&n);

    for(int i = 2 ; i <= n ; i+=2)
    {
        printf(" %d ", i);
        sum += i ;
    }
        printf(" sum = %d ", sum);

    return 0 ;
}
