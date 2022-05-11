// Write a C program to input any character to check whether it is alphabet/digit/special character

#include<stdio.h>
int main(){
    int c ;
    printf("Enter a character : ");
    scanf("%c",&c);

    if((c >= 97 && c <= 122) || (c >= 65 && c <= 90)){
        printf("\n The character is Alphabet ! \n");
     }
     else if( c>= '0' && c<= '9'){
        printf("\n The character is Digit! \n") ;
     }
     else{
        printf("\n The character is special character ! \n") ;
     }
    return 0 ;
}

