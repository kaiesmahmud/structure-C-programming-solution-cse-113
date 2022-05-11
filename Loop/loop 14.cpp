//Write a C program to enter any number and print its reverse

#include<stdio.h>

int main(){
    int n, r=0, d;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(n!=0)
    {
     d = n%10;
     r= r*10 + d;
     n /= 10;
    }

    printf("Reversed Number: %d",r);


    return 0 ;
}
