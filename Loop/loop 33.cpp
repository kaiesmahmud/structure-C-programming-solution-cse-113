//Write a C program to print all  Armstrong number between 1 to n .
// 1  2  3  4  5  6  7  8  9  153  370  371  407

#include<stdio.h>
#include<math.h>
int checkArmstrong(int num)
{
    int  originalNum, remainder, n = 0;
    float result = 0.0;

    originalNum = num;

    // store the number of digits of num in n
    for (originalNum ; originalNum != 0; n++ )
    {
        originalNum /= 10;
    }

    for (originalNum = num; originalNum != 0; originalNum /= 10)
    {
        remainder = originalNum % 10;

        // store the sum of the power of individual digits in result
        result += pow(remainder, n);
    }

    // if num is equal to result, the number is an Armstrong number
    if (result == num)
    {
        return num ;
    }
    else
    {
        return 0 ;
    }
}

int main()
{
    int givenNumber, number ;
    printf("'Enter a Number to see the armstrong number between-");
    scanf("%d",&givenNumber);

    for(int i = 1 ; i < givenNumber ; i++)
    {
        number = checkArmstrong(i);
        if(number)
        {
            printf(" %d ", number);
        }
    }

    return 0;
}

