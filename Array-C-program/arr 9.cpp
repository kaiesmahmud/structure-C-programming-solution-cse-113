//Write a C program to insert an element in  array

#include<stdio.h>

int main(){
    int i,n,p,v;

    printf("Enter length of an array: ");
    scanf("%d",&n); //receiving array length

    int arr[n+1];

    i=0;
    while(i<n) // showing array values 0-(n-1)
    {
        arr[i]=i+1;
        printf(" %d ",arr[i]);
        i++;
    }

    printf("\n Enter a position to insert element: ");
    scanf("%d",&p);
    printf("\n Enter  value of element: ");
    scanf("%d",&v);

    i= n;
    while(i>=p)
    {
        arr[i] = arr[i-1];
        i--;
    }
    arr[p-1]=v;

    i= 0;

    while(i<=n)//0-n -> printing one more
    {
        printf(" %d ",arr[i]);
        i++;
    }

    return 0 ;
}

