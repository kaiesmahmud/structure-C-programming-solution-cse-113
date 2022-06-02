//Write a C program to find second largest element  in an array -- Using Recursion
#include<stdio.h>
int firstmx(int arr[],int start,int len,int mx)//creating a function
{
    if(start>=len) return mx;//set the limit for recursion
    if(mx<=arr[start]) mx = arr[start];
    firstmx(arr,start+1,len,mx);// creating recursion,by calling self function again
}
int secondMx(int arr[],int start,int len,int mx,int mx2)//creating a function
{
    if(start>=len) {
        printf("The second max value of array  is %d\n",mx2);
        return 0;//set the limit for recursion
    }
    if(mx2<=arr[start] && mx!=arr[start]) mx2 = arr[start];

    secondMx(arr,start+1,len,mx,mx2);// creating recursion,by calling self function again
}
int main(){
    int n, i, mx, mx2;
    printf("Enter Array Length: ");
    scanf("%d",&n);
    int arr[n];
    i=0;
    printf("\n Enter Array Values: ");
    while(i<n){
        scanf("%d",&arr[i]);//receiving arr element
        i++;
    }
    mx2 = arr[0];//taking first element value as minimum value for compare
    mx = arr[0];//taking first element value as maximum value for compare
    mx = firstmx(arr,0,n,mx); //invoking function
    secondMx(arr,0,n,mx,mx2);
    return 0;
}



