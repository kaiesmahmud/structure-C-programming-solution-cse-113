//Write a C program to find maximum and minimum element  in an array -- Using Recursion
#include<stdio.h>
int Minmax(int arr[],int start,int len,int mn,int mx)//creating a function
{
    if(start>=len) {
        printf("The Maximum value of array element is %d\n",mx);
        printf("The Minimum value of array element is %d\n",mn);
        return 0;//set the limit for recursion
    }
    if(mx<=arr[start]) mx = arr[start];
    if(mn>=arr[start]) mn = arr[start];
    Minmax(arr,start+1,len,mn,mx);// creating recursion,by calling self function again
}
int main(){
    int n, i, mn, mx;
    printf("Enter Array Length: ");
    scanf("%d",&n);
    int arr[n];
    i=0;
    printf("\n Enter Array Values: ");
    while(i<n){
        scanf("%d",&arr[i]);//receiving arr element
        i++;
    }
    mn = arr[0];//taking first element value as minimum value for compare
    mx = arr[0];//taking first element value as maximum value for compare
    Minmax(arr,0,n,mn,mx); //invoking function
}


