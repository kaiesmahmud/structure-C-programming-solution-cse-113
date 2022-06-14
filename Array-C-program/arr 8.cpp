//Write a C program to copy all elements from one array to another array

#include<stdio.h>

int main(){
    int i,n;

    printf("Enter length of an array: ");
    scanf("%d",&n); //receiving array length

    int arr[n],dupArr[n];

    i=0;
    while(i<n) // receiving array values
    {
        printf("\n arr[%d] = ",i);
        scanf("%d",&arr[i]);
        i++;
    }
    printf("\n The Duplicate array is: \n");
    i=0;
    while(i<n)
    {
        dupArr[i]=arr[i];
        printf("\n arr[%d] = dupArr[%d] = %d ",i,i,dupArr[i]);
        i++;
    }

    return 0 ;
}
