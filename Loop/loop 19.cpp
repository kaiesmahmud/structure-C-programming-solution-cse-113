//Write a C program to find power of any number using for loop
#include<stdio.h>
int main(){
    int base, exponent,power = 1;

    printf(" Enter base: ");//Take base and exponent as input
    scanf("%d", &base);
    printf("\n Enter exponent: ");
    scanf("%d", &exponent);

    int expo = exponent;

    while (expo < 0)
    {
            power /= base;
            expo++;
    }
    if(exponent >0)
    {
        for(int i = 1 ; i <= exponent; i++)
        {
            power *=  base;
        }
    }
    printf("\n %d ^ %d = %d", base, exponent, power);

    return 0 ;
}
