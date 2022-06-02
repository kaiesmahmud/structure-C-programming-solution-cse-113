//Write a C program to print sum of all elements in an array - using recursion
#include<stdio.h>
int sumArr(int arr[],int start,int len,int sum)//creating a function
{
    if(start>=len) {
        printf("The Sum of array element is %d\n",sum);
        return 0;//set the limit for recursion
    }
    sum+=arr[start];
    sumArr(arr,start+1,len,sum);// creating recursion,by calling self function again
}
int main(){
    int n,i,sum = 0;
    printf("Enter Array Length: ");
    scanf("%d",&n);
    int arr[n];
    i=0;
    printf("\n Enter Array Values: ");
    while(i<n){
        scanf("%d",&arr[i]);//receiving arr element
        i++;
    }
    sumArr(arr,0,n,sum); //invoking function
    return 0;
}

