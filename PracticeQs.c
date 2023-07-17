

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

     /*5.print the smallest number
     int a,b;
     scanf("%d",&a);
     scanf("%d",&b);
     
     if(a<b){
        printf("Smallest number : %d",a);
     }
     else{
        printf("Smallest number : %d",b);
     }*/

     /*6.Write a program to check if a student passed or failed*/

     int marks;
     printf("Enter marks(0-100): ");
     scanf("%d",&marks);
     /*if(marks>=35 && marks<=100){
      printf("Pass");
     }
     else if(marks>=0 && marks<35){
      printf("Fail");
     }
     else{
      printf("wrong marks");
     }*/

     //Using ternary 
     //marks>=35 ? printf("pass") : printf("fail");

      /*7. Program to give grades to a student*/
      
      if(marks <= 35){
         printf("C");
      }
      else if(marks >= 35 && marks<70){
         printf("B");
      }
      else if(marks >= 70 && marks<90){
         printf("A");
      }
      else if(marks >= 90 && marks<=100){
         printf("A+");
      }
      else{
         printf("marks should be in 1-100");
      }
    return 0;
}
