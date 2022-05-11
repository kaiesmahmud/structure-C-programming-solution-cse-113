// Write a C program to check a character is uppercase or lowercase

#include<stdio.h>
int main()
{
    int c ;
    printf("Enter a character : ");
    scanf("%c",&c);

    if(c >= 97 && c <= 122 )
    {
        printf("\n The character is LowerCase! \n") ;
    }
    if(c >= 65 && c <= 90)
    {
        printf("\n The character is UpperCase ! \n");
    }

    return 0 ;
}

