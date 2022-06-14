//Write a C program to print all the unique number of an array

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
    printf("\n The Unique values of  array is: \n");
    i=0;
    while(i<n)
    {
        j=0;
        c=0;
        while(j<=i)
        {
            if(arr[j]==arr[i])
            {
                c++;
            }
            j++;
        }
        if(c ==1){
            printf(" %d ",arr[i]);
        }
        i++;
    }

    return 0 ;
}

