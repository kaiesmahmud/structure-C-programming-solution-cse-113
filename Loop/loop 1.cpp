//write a C program to print all natural numbers in reverse (from n to 1 )
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);

    for(n ; n > 0 ; n-- )  printf(" %d ",n);

    return 0 ;
}

