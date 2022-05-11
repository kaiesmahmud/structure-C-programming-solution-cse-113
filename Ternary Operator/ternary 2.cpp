//Write a C program to find if a number is even or odd  using ternary operator

#include<stdio.h>
int main(){
    int a;
    printf(" \n Enter a  Value to check if it's even or odd : ");
    scanf("%d",&a);

    a % 2 == 0 ? printf(" \n \t %d is Even number",a): printf(" \n \t %d is Odd number",a);

    return 0 ;
}
