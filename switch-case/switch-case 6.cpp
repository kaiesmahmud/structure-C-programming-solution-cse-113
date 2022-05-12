//Write a C program to find roots of a quadratic equations using switch case

#include<stdio.h>
#include <math.h>
int main()
{
    float a, b, c, discriminant, root1, root2, realPart, imagPart;

    printf("\n According to a(x)^2 + bx + c = 0 ");
    printf("\n Enter coefficient a: ");
    scanf("%f",&a);
    printf("\n Enter coefficient b: ");
    scanf("%f",&b);
    printf("\n Enter coefficient c: ");
    scanf("%f",&c);

    discriminant = b * b - 4 * a * c;

    switch (discriminant > 0)
    {
    case 1:
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("root1 = %.2f and root2 = %.2f", root1, root2);
        break;
    case 0 :
        if (discriminant == 0)
        {
            root1 = root2 = -b / (2 * a);
            printf("root1 = root2 = %.2f;", root1);
        }else{
            realPart = -b / (2 * a);
            imagPart = sqrt(-discriminant) / (2 * a);
            printf("root1 = %.2f+%.2fi and root2 = %.2f-%.2fi", realPart, imagPart, realPart, imagPart);
        }

    }

    return 0 ;
}

