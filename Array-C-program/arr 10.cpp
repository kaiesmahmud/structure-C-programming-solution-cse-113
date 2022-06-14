//Write a C program to delete an element from an array in a specific position

#include<stdio.h>
int main()
{
    int i,n,p;
    int arr[10];
    n=10;
    i=0;
    while(i<n)
    {
        arr[i]=i+1;
        printf(" %d ",arr[i]);
        i++;
    }
    printf("\n Enter a position to delete (1-10):");
    scanf("%d",&p);
    //deleting
    i=p-1;
    while(i<n-1)
    {
        arr[i]=arr[i+1];
        i++;
    }
    //printing results
    i=0;
    while(i<n-1)
    {
        printf(" %d ",arr[i]);
        i++;
    }

    return 0;
}
