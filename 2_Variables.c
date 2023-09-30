//Variables :
// Variable is the name of a memory location that stores some data

//Keywords: Reserved words that have special meaning to the compiler
//There are 32 keywords in C

/*
Format Specifiers:
1. Integers
printf("age is %d",age);

2.Real numbers
printf("value of pi is is %f",pi);

3.Char
printf("char is %c",ch);

Compilation:
A computer program that translated C code into machine code

*/


#include <stdio.h>//Pre-processor directive

int main(){
    int age = 21;
    float pi = 3.14;
    char hashtag = '#';
    int final_price = 100;
    printf("age is %d \n",age);
    return 0;
}
