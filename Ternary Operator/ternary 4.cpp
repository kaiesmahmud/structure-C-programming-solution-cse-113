// Write a C program to check Whether character is an alphabet or not using ternary operator

#include<stdio.h>
int main(){
    int c ;

    printf("\n Enter a character : ");
    scanf("%c",&c );

    (c >= 97 && c <= 122) || (c >= 65 && c <= 90)?
     printf("\n The character is Alphabet ! \n")
     : printf("\n The character is NOT  Alphabet ! \n") ;


    return 0 ;
}
