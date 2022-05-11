//Write a C program to print all ASCII character with their values

#include<stdio.h>
int main(){
    int i;
    for(i=0; i<=255; i++)  //Print ASCII values from 0 to 255
    {
        printf("ASCII value of character %c = %d  \n", i, i);
    }
    return 0 ;
}
