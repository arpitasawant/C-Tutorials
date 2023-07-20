

#include <stdio.h>

void namaste();
void bonjour();
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

   /*int marks;
   printf("Enter marks(0-100): ");
   scanf("%d",&marks);
   if(marks>=35 && marks<=100){
    printf("Pass");
   }
   else if(marks>=0 && marks<35){
    printf("Fail");
   }
   else{
    printf("wrong marks");
   }*/

   // Using ternary
   // marks>=35 ? printf("pass") : printf("fail");

   /*7. Program to give grades to a student

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
   }*/

   /*8. Program to find if a character entered by user is upper case or not

   char ch;
   printf("Enter character: ");
   scanf("%s",&ch);
   if(ch>='A' && ch <= 'Z'){
      printf("Uppercase");
   }
   else{
      printf("lowercase");
   }*/

   /*9. Print the numbers from 0 to n,if n is given by user

   int n;
   printf("Enter Number: \n");
   scanf("%d",&n);

   for(int i=0;i<=n;i++){
      printf("%d\n",i);
   }*/

   /*10. Print sum of first n natural numbers and also print them in reverse

   int n;
   int sum=0;
   printf("Enter Number: \n");
   scanf("%d",&n);
   if(n==0){
         printf("Natural numbers starts from 1");
      }

   printf("Reverse: ");

   for(int i=1,j=n;i<=n && j>=1;i++,j--){
      sum = sum + i;
      printf("%d",j);
   }

   printf("\nSum of natural numbers: %d \n",sum);*/

   /*11. Print the table of a number input by the user

   int n;
   printf("Enter Number: ");
   scanf("%d",&n);
   printf("Table of %d",n);

   for(int i=1;i<=10;i++){
      printf("\n%d",i*n);
   }*/

   /*12. Keep taking numbers as input until user enters an odd number

   int n;
   printf("Enter number: ");

   while(n>0){
      scanf("%d",&n);
      if(n%2 != 0){
         break;
      }

   }
   printf("Thank you");*/

   /*13. Keep taking numbers as input until user enters a number which is multiple of 7

   int n;
   printf("Enter number: ");

   while(n>0){
      scanf("%d",&n);
      if(n%7 == 0){
         break;
      }

   }
   printf("Thank you");*/

   /*14.Print all odd numbers from 5 to 50

   for (int i = 5; i <= 50; i++)
   {
      if (i %2 == 0)
      {
         continue; // skip
      }
      printf("%d\n", i);
   }*/

   /*15. Print the factorial of a number n*/

   /*16. Print reverse of table for a number n*/

   /*17. Write a fun that prints namaste if user is indian and bonjour if the user is French*/

   printf("enter f for french and i for indian: ");
   char ch;
   scanf("%c", &ch);
   if (ch == 'i')
   {
      namaste();
   }
   else
   {
      bonjour();
   }
   return 0;
}

void namaste()
{
   printf("Namaste\n");
}

void bonjour()
{
   printf("Bonjour\n");
}