//Write a C program to count total number of duplicate elements
#include<stdio.h>
int main()
{
    int i,n,j,c;

    printf("Enter length of an array: ");
    scanf("%d",&n); //receiving array length

    int arr[n];
    // receiving array values
    i=0;
    while(i<n)
    {
        printf("\n arr[%d] = ",i);
        scanf("%d",&arr[i]);
        i++;
    }
    printf("\n The total number of duplicate elements: ");
    i=0;
    c=0;//count of duplicate element
    while(i<n)
    {
        j=0;
        while(j<i)
        {
            if(arr[j]==arr[i])
            {
                c++;
                break;
            }
            j++;
        }
        i++;
    }
    printf(" %d ",c);

    return 0 ;
}
