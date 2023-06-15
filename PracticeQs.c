

#include <stdio.h>

int main()
{
    /* 1.Calculate area of a square(side is given)
    float side;
    scanf("%f",&side);
    float area = side * side;
    printf("Area of square is: %f",area);*/

    /* 2.Calculate area of a square(radius is given)
    float radius;
    float pi=3.14;
    printf("Enter radius: ");
    scanf("%f",&radius);
    float area = pi*radius * radius;
    printf("Area of square is: %f",area);*/
    
    /*3.Check if a number is divisible by 2 or not
    
    
    int a;
    printf("Enter number: ");
    scanf("%d",&a);
    printf("%d",a % 2 == 0);*/

    /*4.Check if given character is digit or not
    char ch;
    printf("Enter Character: ");
    scanf("%c",&ch);
    // printf("ch is digit %c",ch>='0' && ch<='9');
    if(ch>='0' && ch<='9')
	 {
	  	printf("%c is DIGIT.", ch);
	 }
	 else
	 {
	  	printf("%c is NOT DIGIT.", ch);
	 }*/

     /*5.print the smallest number*/
     int a,b;
     scanf("%d",&a);
     scanf("%d",&b);
     
     if(a<b){
        printf("Smallest number is: %d",a);
     }
     else{
        printf("Smallest number is: %d",b);
     }
    return 0;
}
