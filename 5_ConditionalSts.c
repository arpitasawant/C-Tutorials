#include <stdio.h>

/* Conditional Statements..
1. if-else
2. switch*/
int main()
{

   /*If-else
   if(condition){
      // do something if true
   }
   else{
      // do something if False
   }*/

   // int age;
   // printf("Enter Age: ");
   // scanf("%d", &age);

   /*if(age>=18){
       printf("You are an adult\nThey can vote");
   }
   else{
      printf("You are not an adult");
   }*/

   /*Else if

   if(condition1){
      // do something if true
   }
   else if(condition2){
      // do something if 1st false and 2nd true
   }
   else{
      // do something if False
   }

   if(age>=18){
       printf("adult");
   }
   else if(age>13 && age<18){
      printf("teenager");
   }
   else{
     printf("child");
   }*/

   /*Conditional Operators:
   ternay:--
   condition ? if true execute this : if false execute this

   age>=18 ? printf("adult"):printf("not adult");*/

   /*Switch
   Properties:
   a. cases can be in any order
   b. Nested switch(switch inside switch) are allowed*/

   // Print days using switch

   int day;
   printf("Enter day(1-7) : ");
   scanf("%d", &day);

   switch (day)
   {
   case 1:
      printf("Monday");
      break;
   case 2:
      printf("Tuesday");
      break;
   case 3:
      printf("Wednesday");
      break;
   case 4:
      printf("Thursday");
      break;
   case 5:
      printf("Friday");
      break;
   case 6:
      printf("Saturday");
      break;
   case 7:
      printf("Sunday");
      break;
   default:
      printf("Not a valid day");
   }
   return 0;
}
