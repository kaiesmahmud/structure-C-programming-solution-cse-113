//Write a C program to find out the sum of series of 7 + 20 + 33 + .... Upto 100 terms

#include<stdio.h>
int main(){
    int sum = 7 ;

    printf("%d +",sum );
    for(int i = 2 ; i <= 100 ; i++)
    {
        sum += 13 ;
        i == 100 ? printf(" %d",sum ) : printf(" %d +",sum );
    }
    printf(" =  %d ",sum);

    return 0 ;
}
