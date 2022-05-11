// write a C program to check if a number is divisible by 5 and 11 or not

#include<stdio.h>
int main(){
    int x ;

    printf("\n Enter a Number : ");
    scanf("%d",&x);
    if( x % 5 == 0 && x % 11 == 0 ){
        printf("\n %d is divisible by 5 and 11 ! \n ",x);
    }else{
        printf("\n %d is NOT divisible by 5 and 11 \n");
    }
    return 0;
}
