//Write a C program to input electricity unit charges and calculate the total electricity bill according to the given condition:

#include<stdio.h>
int main()
{
    float unit , bill ;

    printf("\n Enter the electricity unit : ");
    scanf("%f",&unit);

    if(unit <= 50 )
    {
        bill = unit * 0.50 ;
    }
    else if(unit <= 150)
    {
        unit -= 50 ;
        bill = (unit * 0.75) + (50 * 0.50);
    }
    else if(unit <= 250)
    {
        unit -= 150 ;
        bill = ( unit *1.2) +(100 * 0.75) + (50 * 0.50);
    }
    else if(unit > 250 )
    {
        unit -= 250 ;
        bill =(unit * 1.50) + ( 100*1.2) + (100*0.75)+(50 * 0.50);
    }
    printf("\n Total bill : %.2f \n",bill);
    return 0 ;
}
