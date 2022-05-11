//Write a C program to print Prime number between 1 to n

#include<stdio.h>
int main(){
    int n ;
    scanf("%d",&n);

    for(int i = 1 ; i <= n ; i++)
    {
        int c = 0 ; // declare c variable in for loop so that it can set to 0 each time of loop
        for(int j = 1 ; j <= i ;j++)
        {
            if( i % j == 0 )
            {
                c++;
            }
        }
        if( c == 2 )
        {
            printf(" %d ", i);
        }
    }

    return 0 ;
}
