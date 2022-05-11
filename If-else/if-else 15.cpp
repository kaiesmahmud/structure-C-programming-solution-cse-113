//Write a C program to input marks of five subjects and calculate percentage and grade according to followings

#include<stdio.h>
int main()
{
    int a,b,c,d,e,avg;

    printf("Give marks out of 100 \n");
    printf("\n Math : ");
    scanf("%d",&a);
    printf("\n Physics : ");
    scanf("%d",&b);
    printf("\n Chemistry : ");
    scanf("%d",&c);
    printf("\n Biology : ");
    scanf("%d",&d);
    printf("\n English : ");
    scanf("%d",&e);

    avg = (a + b + c + d + e)/5 ;

    if(avg >= 90 && avg <= 100) printf("\n your Grade is A \n");
    if(avg >= 80 && avg <90) printf("\n your Grade is B \n");
    if(avg >= 70 && avg <80) printf("\n your Grade is C \n");
    if(avg >= 60 && avg <70) printf("\n your Grade is D \n");
    if(avg >= 40 && avg <60) printf("\n your Grade is E \n");
    if(avg < 40 )printf("\n your Grade is F \n");
    return 0 ;
}
