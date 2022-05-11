//write a number to check whether a number is negative/positive/zero

#include<stdio.h>
int main(){
    int x ;

    printf("\n Enter a Number : ");
    scanf("%d",&x);

    if(x == 0) {
        printf("\n The Number is Zero");    }else{
        if(x > 0 ){
            printf("\n The Number is Positive");
        }else{
            printf("\n The Number is Negative");
        }
    }
    return 0 ;
}
