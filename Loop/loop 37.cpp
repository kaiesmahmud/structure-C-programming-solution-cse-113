//Write a C program to find a Fibonacci series up to n terms
//0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584, 4181,

#include <stdio.h>

int main()
{
    int a, b, c, i, terms;

    // Input number from user
    printf("Enter number of terms: ");
    scanf("%d", &terms);

    // Fibonacci magic initialization
    a = 0;
    b = 1;
    c = 0;

    printf("Fibonacci terms: \n");

    //Iterate through n terms
    for(i=1; i<=terms; i++)
    {
        printf("%d, ", c);

        a = b;     // a gets value of b
        b = c;     // b gets value of c
        c = a + b; // New term
    }

    return 0;
}
