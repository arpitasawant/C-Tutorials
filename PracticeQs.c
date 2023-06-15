#include <stdio.h>

int main()
{
    /* 1.Calculate area of a square(side is given)
    float side;
    scanf("%f",&side);
    float area = side * side;
    printf("Area of square is: %f",area);*/

    /* 2.Calculate area of a square(radius is given)*/
    float radius;
    float pi=3.14;
    printf("Enter radius: ");
    scanf("%f",&radius);
    float area = pi*radius * radius;
    printf("Area of square is: %f",area);
    
    return 0;
}
