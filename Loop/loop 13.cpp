//Write a C program to find sum of first and last digit of any number

#include<stdio.h>

int main(){
    int n, first, last;
    printf("Enter number = ");
    scanf("%d", &n);

    last = n % 10; // Find last digit of a number

    while(n >= 10)
    {
        n = n / 10; //Find the first digit by dividing n by 10 until n greater then 10
    }
    first = n;

    printf("\n Sum of First and Last digit is :%d + %d =  %d \n" ,first ,last , first+last);


    return 0 ;
}
