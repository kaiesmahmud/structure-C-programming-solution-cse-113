//Write a C program to print all negative elements in an array
#include<stdio.h>
int negElement(int arr[],int start,int len)//creating a function
{
    if(start>=len) return 0;//set the limit for recursion
    if(arr[start]<0)printf(" %d ",arr[start]);
    negElement(arr,start+1,len);// creating recursion,by calling self function again
}
int main(){
    int n,i;
    printf("Enter Array Length: ");
    scanf("%d",&n);
    int arr[n];
    i=0;
    printf("\n Enter Array Values: ");
    while(i<n){
        scanf("%d",&arr[i]);//receiving arr element
        i++;
    }
    printf("\n Printing Negative values:");
    negElement(arr,0,n); //invoking function for printing negative values
    return 0;
}
