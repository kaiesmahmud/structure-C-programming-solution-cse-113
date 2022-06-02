//Write a C program to print all Perfect numbers between 1 to  n
// 6  28  496
#include<stdio.h>
#include<math.h>
int checkPerfectNum(int num)
{
   int i, sum = 0;

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
        //printf("%d is PERFECT NUMBER", num);
        return num;
    }
    else
    {
        //printf("%d is NOT PERFECT NUMBER", num);
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
        number = checkPerfectNum(i);
        if(number)
        {
            printf(" %d ", number);
        }
    }

    return 0;
}

