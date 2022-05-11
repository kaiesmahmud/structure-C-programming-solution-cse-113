//Write a C program to check the number is palindrome or not

#include<stdio.h>

int main(){
    int n, r=0, d , m;

    printf("Enter a number: ");
    scanf("%d", &n);
    m = n ;
    while(n!=0)
    {
     d = n%10;  // d is for taking last digit from n
     r= r*10 + d;
     n /= 10;
    }

    r == m ? printf("\n The Number is Palindrome \n") : printf("\n The Number is not Palindrome \n");

    return 0 ;
}
