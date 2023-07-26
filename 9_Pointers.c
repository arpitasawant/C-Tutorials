#include <stdio.h>

/*pointers: 
A variable that stores the memory address of another variable

Syntax:
int age = 22;
int *ptr = &age; 
*-->value at address
&-->address of variable
int _age=*ptr;

declaring pointers:
int *ptr;
char *ptr;
float *ptr;

Format specifier

printf("%p",&age);
printf("%p",ptr);
printf("%p",&ptr);


*/

int main() {

int age = 22;
int *ptr = &age;
int _age=*ptr;

//address-->address on hexadecimal format
// printf("%p\n",&age);

//unsigned int-->address on integer

/*printf("%u\n",&age);
printf("%u\n",ptr);*/

/*
// Format Specifier
//value
printf("%d\n",age);
printf("%d\n",*ptr);
printf("%d\n",*(&age));*/
 
/*Pointer to Pointer
A variable that stores the memory address of another pointer*/ 

/*Pointers in Function call*/
return 0;
}
