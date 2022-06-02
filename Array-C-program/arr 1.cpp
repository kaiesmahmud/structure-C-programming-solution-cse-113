//Write a C program to read and print elements of array -using recursion
#include<stdio.h>
int recursionArr(int arr[],int start,int len)//creating a function
{
    if(start>=len) return 0;//set the limit for recursion
    printf("%d ",arr[start]);
    recursionArr(arr,start+1,len);// creating recursion,by calling self function again
}
int main(){
    int n,i;
    printf("Enter Array Length: ");
    scanf("%d",&n);
    int arr[n];
    i=0;
    printf("\n Enter Array Values: ");
    while(i<n){
        scanf("%d",&arr[i]);
        i++;

    }
    printf("\n Printing values:");
    recursionArr(arr,0,n); //invoking function
    return 0;
}
