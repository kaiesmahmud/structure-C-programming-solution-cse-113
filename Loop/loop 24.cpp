
// Write a C program to find  out the Sum of Series  5 - 11 + 17 - .... up to n terms

#include<stdio.h>
int main(){
    int n = 0 ,sum = 0,term ;

    scanf("%d",&term); // enter terms to calculate  sum

    for(int i = 1 ; i <= term ; i++)
    {
        i == 1 ? n += 5 : n += 6 ;
        i % 2 == 0 ? sum -= n : sum += n ;   // calculating sum of series
        i % 2 == 0 ? printf("- %d ",n) : printf("+ %d ",n) ; // showing the series

    }
    printf(" = %d ",sum);
    return 0 ;
}
