//Write a C program to create simple calculator using switch case

#include<stdio.h>

int main()
{
    float a ,b ;
    char c ;
    printf("\n Calculator using Switch case ( + , - , * , /  ) : \n ");
    printf("\n enter first number :  ");
    scanf("%f",&a);
    printf("\n enter second number :  ");
    scanf("%f",&b);
    printf("\n enter a operation  :  ");
    scanf("%s",&c);


    switch(c)
    {
    case '+':
        printf("\n %.2f + %.2f = %.2f \n",a,b,a+b);
        break;
    case '-':
        printf("\n %.2f - %.2f = %.2f \n",a,b,a-b);
        break;
    case '*':
        printf("\n %.2f * %.2f = %.2f \n",a,b,a*b);
        break;
    case '/':
        printf("\n %.2f / %.2f = %.2f \n",a,b,a/b);
        break;

    default:
        printf("\n Enter correct operator \n");
    }
    return 0 ;
}

