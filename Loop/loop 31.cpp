//Write a C program to check if a number is perfect number or not
//1 + 2 + 3 = 6. Hence 6 is a perfect number.
// perfect number - 6,28,496
#include <stdio.h>
int main()
{
    int i, num, sum = 0;

    printf("Enter any number to check perfect number: ");
    scanf("%d", &num);

    /* Calculate sum of all proper divisors */
    for(i = 1; i <= num / 2; i++)
    {
        /* If i is a divisor of num */
        if(num%i == 0)
        {
            sum += i;
        }
    }

    /* Check whether the sum of proper divisors is equal to num */
    if(sum == num && num > 0)
    {
        printf("%d is PERFECT NUMBER", num);
    }
    else
    {
        printf("%d is NOT PERFECT NUMBER", num);
    }

    return 0;
}
