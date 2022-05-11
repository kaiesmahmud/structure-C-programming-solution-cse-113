// Write a C program to check whether a character is alphabet or not

#include<stdio.h>
int main(){
    int c ;
    printf("Enter a character : ");
    scanf("%c",&c);

    if((c >= 97 && c <= 122) || (c >= 65 && c <= 90)){
        printf("\n The character is Alphabet ! \n");
     }else{
        printf("\n The character is NOT  Alphabet ! \n") ;
     }
    return 0 ;
}
