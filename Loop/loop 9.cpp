//Write a C program to count the number of digits of any number

#include<stdio.h>
int main(){
    int n ,c = 0;

    scanf("%d",&n);

    while( n > 0 )
    {
        n /= 10;
        c++;
    }

    printf(" %d ",c);

    return 0 ;
}
