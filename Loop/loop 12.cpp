//Write a C program to swap first and last digit of any number

#include<stdio.h>
#include<math.h>
int main(){
    int n, first, last,c = 0,s  ;

    printf("Enter number = ");
    scanf("%d", &n);
    s = n/10 ;

    last = n % 10; // Find last digit of a number

    while(n >= 10)
    {
        n = n / 10; //Find the first digit by dividing n by 10 until n greater then 10
        c++;
    }
    first = n;
    s =  (s - ( first * pow(10,c-1) )) + ( last * pow(10,c-1))  ;
    s = ( s * 10 ) + first ;

    printf("\n %d \n\n", s);
    return 0 ;
}
