//Write a C program to check whether a alphabet is vowel or consonant using switch case

#include<stdio.h>
int main()
{
    char c ;
    printf("\n enter a alphabet : ");
    scanf("%c",&c);

    switch (c)
    {
    case 'a':
        printf("\n the alphabet is vowel \n") ;
        break ;
    case 'e':
        printf("\n the alphabet is vowel \n") ;
        break ;
    case 'i':
        printf("\n the alphabet is vowel \n") ;
        break ;
    case 'o':
        printf("\n the alphabet is vowel \n") ;
        break ;
    case 'u':
        printf("\n the alphabet is vowel \n") ;
        break ;
    case 'A':
        printf("\n the alphabet is vowel \n") ;
        break ;
    case 'E':
        printf("\n the alphabet is vowel \n") ;
        break ;
    case 'I':
        printf("\n the alphabet is vowel \n") ;
        break ;
    case 'O':
        printf("\n the alphabet is vowel \n") ;
        break ;
    case 'U':
        printf("\n the alphabet is vowel \n") ;
        break ;
    default:
        printf("\n the alphabet is Consonant \n") ;
    }
    return 0 ;

}
