//Write a C program to Print all Strong Number between 1 to n
// 1  2  145
#include<stdio.h>
#include<math.h>
int checkStrongNum(int num)
{
    int i, originalNum, lastDigit, sum = 0;
    long fact;

    /* Copy the value of num to a temporary variable */
    originalNum = num;

    sum = 0;

    /* Find sum of factorial of digits */
    while(num > 0)
    {

        /* Get last digit of num */
        lastDigit = num % 10;

        /* Find factorial of last digit */
        fact = 1;
        for(i=1; i<=lastDigit; i++)
        {
            fact = fact * i;
        }

        /* Add factorial to sum */
        sum = sum + fact;

        num = num / 10;
    }

    /* Check Strong number condition */
    if(sum == originalNum)
    {
        //printf("%d is STRONG NUMBER", originalNum);
        return originalNum ;
    }
    else
    {
        //printf("%d is NOT STRONG NUMBER", originalNum);
        return 0 ;
    }
}

int main()
{
    int givenNumber, number ;
    printf("'Enter a Number to see the Perfect number between 1 - ");
    scanf("%d",&givenNumber);

    for(int i = 1 ; i < givenNumber ; i++)
    {
        number = checkStrongNum(i);
        if(number)
        {
            printf(" %d ", number);
        }
    }

    return 0;
}
