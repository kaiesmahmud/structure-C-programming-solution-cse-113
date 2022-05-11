//Write a C program to print all factors of a number

#include<stdio.h>
int main(){
    int n, i;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if ( n % i == 0)
        {
            printf("%d ", i);
        }
    }

    return 0 ;
}
