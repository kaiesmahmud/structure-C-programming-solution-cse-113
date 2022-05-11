//Write a C program to input basic salary of an employee and calculate its Gross salary according to following

#include<stdio.h>
int main()
{
    float s,gross;
    printf("\n Enter the Basic Salary : ");
    scanf("%f",&s);

    if (s >= 30000) gross = s + (s* 0.3)+(s*0.95) ;
    if (s >= 20000 && s < 30000) gross = s + (s* 0.25)+(s*0.9) ;
    if (s >= 10000 && s < 20000) gross = s + (s* 0.2)+(s*0.8) ;

    printf("\n Gross Salary is %.2f tk \n ",gross);
    return 0 ;
}
