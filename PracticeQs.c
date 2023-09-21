#include <stdio.h>
#include <math.h>

void namaste();
void bonjour();
int factorial(int n);
int fibonacci(int n);
void printAddress(int n);
void sumnproduct(int a, int b, int *sum, int *product, int *avg);
void reverse(int arr[], int n);
int printArray(int arr[], int n);
void printString(char arr[]);

int main()
{
   /* 1.Calculate area of a square (side is given)
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

   /*17. Write a fun that prints namaste if user is indian and bonjour if the user is French

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
   }*/

   /*18. Use library functions to calculate the square of a number given by user

   int n;
   printf("Enter number: ");
   scanf("%d",&n);
   printf("Square of a number is: %f",pow(n,2));*/

   /*19. Factorial of n using recursion

   int f = factorial(3);
   printf( "Factorial is: %d",f);*/

   /*20. Write a fun to print n terms of the fibonacci sequence


   int n;
   printf("Enter number: ");
   scanf("%d",&n);
   int f = fibonacci(n);
   printf("%d",f);*/

   /*21.Find Output

   int *ptr;
   int x;
   ptr = &x;
   *ptr = 0;

   printf("x=%d\n",x);
   printf("*ptr = %d\n",*ptr);

   *ptr += 5;
   printf("x=%d\n",x);
   printf("*ptr = %d\n",*ptr);

   (*ptr)++;
   printf("x=%d\n",x);
   printf("*ptr = %d\n",*ptr);*/

   /*22. Print value of i from pointer to pointer

   int i=22;
   int *ptr = &i;
   int **pptr = &ptr;
   printf("%d",**pptr);*/

   /*23. Will the address output be same?

   int n=4;
   printf("%p\n",&n);
   printAddress(n);*/

   /*24.Write a function to calculate the sum,product&average of 2 numbers.Print that average in the main function

   int a = 3, b = 5;
   int sum, product, avg;
   sumnproduct(a, b, &sum, &product, &avg);

   printf("sum=%d, product=%d, Average=%d\n ", sum, product, avg);*/

   /*25. Write a program to enter price of 3 items and print their final cost with gst

   float price[3];

   printf("Enter Price: \n");
   scanf("%f",&price[0]);
   scanf("%f",&price[1]);
   scanf("%f",&price[2]);

   printf("total price 1: %f\n",price[0]+(0.18*price[0]));
   printf("total price 1: %f\n",price[1]+(0.18*price[0]));
   printf("total price 1: %f\n",price[2]+(0.18*price[0]));*/

   /*26.Write a function to count the number of odd numbers in an array

   int count = 0;
   int arr[]={1,2,3,7,5};
   for(int i=0;i<5;i++){
      if(arr[i] % 2 !=0){
         count++;
      }
   }
   printf("Total count of odd numbers: %d",count);*/

   /*27.Write a function to revere an array

   int arr[] = {1, 2, 3, 4, 5};
   for (int i = 4; i >= 0; i--)
   {
      printf("%d\n", arr[i]);
   }

   // classical method

   reverse(arr, 5);
   printArray(arr, 5);*/

   /*28.Create a string firstname and lastname to store details of user and print all the characters using a loop*/

   char firstname[] = "Arpita";
   char lastname[] = "Sawant";

   printString(firstname);
   printString(lastname);
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

int factorial(int n)
{
   if (n == 1)
   {
      return 1;
   }
   int fact = factorial(n - 1);
   int num = fact * n;
   return num;
}

int fibonacci(int n)
{
   if (n == 1 || n == 0)
   {
      if (n == 0)
      {
         return 0;
      }
      if (n == 1)
      {
         return 1;
      }
   }
   int fibN1 = fibonacci(n - 1);
   int fibN2 = fibonacci(n - 2);
   int fibN = fibN1 + fibN2;
   // printf("fib of %d is: %d",n,fibN);
   return fibN;
}

void printAddress(int n)
{
   printf("%p\n", &n);
}

void sumnproduct(int a, int b, int *sum, int *product, int *avg)
{

   *sum = a + b;
   *product = a * b;
   *avg = (a + b) / 2;
}

void reverse(int arr[], int n)
{
   for (int i = 0; i < n / 2; i++)
   {
      int firstval = arr[i];
      int secval = arr[n - i - 1];
      arr[n - i - 1] = firstval;
      arr[i] = secval;
   }
}
int printArray(int arr[], int n){
   for(int i=0;i<n;i++){
      printf("%d\t",arr[i]);
   }
   printf("\n");
}

void printString(char arr[]){
   for(int i=0;arr[i]!='\0';i++){
      printf("%c",arr[i]);
   }
   printf("\n");
}
