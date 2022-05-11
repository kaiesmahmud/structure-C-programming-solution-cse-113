// write a C program to count total number of notes(money) in given amount

#include<stdio.h>
int main(){
    int n, n1000, n500, n100, n50, n20, n10, n5, n2, n1;

    printf("\n Enter Amount : ");
    scanf("%d",&n);

    if(n >= 1000){
        n1000 = n / 1000 ;
        n -= (n1000 * 1000) ;
        printf("\n total %d notes of 1000 tk ",n1000);
    }
    if( n >= 500 ){
        n500 = n / 500 ;
        n -= n500 * 500 ;
        printf("\n total %d notes of 500 tk ",n500);
    }
    if(n >= 100){
        n100 = n / 100 ;
        n -= n100*100 ;
        printf("\n total %d notes of 100 tk ",n100);
    }
    if(n >= 50){
        n50 = n / 50 ;
        n -= n50*50 ;
        printf("\n total %d notes of 50 tk ",n50);
    }
    if(n >= 20){
        n20 = n / 20 ;
        n -= n20*20 ;
        printf("\n total %d notes of 20 tk ",n20);
    }
    if(n >= 10){
        n10 = n / 10 ;
        n -= n10*20 ;
        printf("\n total %d notes of 10 tk ",n10);
    }
    if(n >= 5){
        n5 = n / 5 ;
        n -= n5*5 ;
        printf("\n total %d notes of 5 tk ",n5);
    }
    if(n >= 2){
        n2 = n / 2 ;
        n -= n2*2 ;
        printf("\n total %d notes of 2 tk ",n2);
    }
    if(n >= 1){
        n1 = n / 1 ;
        n -= n1 ;
        printf("\n total %d notes of 1 tk ",n1);
    }

    return 0 ;
}
