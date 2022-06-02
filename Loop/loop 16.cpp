//Write a C program to find frequency of each digit in a given integer
//kaies mahmud nehal 58th A
#include<stdio.h>

int main(){
    int number , reminder,counts ,i,j;
    printf("\n Input any  integer : ");
    scanf("%d",&number);

    for(i = 0 ; i<10 ; i++)
    {
        counts = 0 ;
        for(j = number ; j > 0 ; j/= 10)
        {
            reminder = j % 10 ;
            if(reminder == i)
            {
                counts++;
            }
        }
        printf("\n The Frequency of %d is = %d \n",i , counts);
    }

    return 0 ;
}
