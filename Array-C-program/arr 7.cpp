//Write a C program to count total number of negative elements in an array

#include<stdio.h>

int main(){
    int i,n,neg;

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
    neg = 0;
    i=0;
    while(i<n)
    {
        (arr[i] < 0)&& neg++;
        i++;
    }
    printf("\n Total Negative Elements: %d\n",neg);
    return 0 ;
}
