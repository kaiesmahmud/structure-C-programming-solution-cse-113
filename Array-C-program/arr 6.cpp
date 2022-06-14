//Write a C program to count total number of even and odd numbers of an array

#include<stdio.h>

int main(){
    int i,n,even,odd,zero;

    printf("Enter length of an array: ");
    scanf("%d",&n); //receiving array length

    int arr[n];


    i=0;
    while(i<n) // receiving array values
    {
        printf("\n arr[%d] = ",i);
        scanf("%d",&arr[i]);
        i++;
    }
    even=0;
    odd=0;
    zero = 0;
    i=0;
    while(i<n)
    {
        (arr[i] != 0)?(arr[i]%2 == 0)?even++:odd++:zero++;
        i++;
    }
    printf("\n Total Even count: %d \n Total Odd count: %d \n Total Zero:%d",even,odd,zero);

    return 0 ;
}
