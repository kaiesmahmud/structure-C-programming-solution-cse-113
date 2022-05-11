//write a C program to input any alphabet and check if its a vowel or consonent

#include<stdio.h>
int main(){
    int c ;
    printf("Enter a character : ");
    scanf("%c",&c);

    if((c >= 97 && c <= 122) || (c >= 65 && c <= 90)){
        if( c == 'a'||c =='e'||c =='i'||c =='o'||c =='u'||c =='A'||c =='E'||c =='I'||c =='O'||c =='U' ){
            printf("\n The alphabet is vowel ! \n");
        }else{
            printf("\n The alphabet is consonent \n");
        }
     }else{
        printf("\n The character is NOT  Alphabet ! \n") ;
     }
    return 0 ;
}
