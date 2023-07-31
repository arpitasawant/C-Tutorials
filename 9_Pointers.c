#include <stdio.h>

// void square(int n);
// void _square(int *n);
void swap(int a, int b);
void _swap(int *a,int *b);


/*Pointers:
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

Pointer Arithmetic:
Pointer can be incremented and decremented-->
int age = 22;
int *ptr = &age;
ptr++;
*/

int main()
{

    int age = 22;
    int *ptr = &age;
    int _age = *ptr;

    // address-->address on hexadecimal format
    //  printf("%p\n",&age);

    // unsigned int-->address on integer

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

    /*Pointers in Function call
    call by value: we pass value of variable as argument
    call by reference: we pass address of variable as argument*/

    /*int number = 4;

    square(number);
    printf("number = %d\n", number);
    _square(&number);
    printf("number = %d\n", number);*/

    int x=3,y=5;
    // swap(x,y);
    // printf("Swapping of x & y: %d %d\n", x, y);

    _swap(&x,&y);
    printf("Swapping of x & y: %d %d\n", x, y);
    return 0;
}

void square(int n)
{

    n = n * n;
    printf("square = %d\n", n);
}

// Pointers changes the value and update it,here it sets as 16
void _square(int *n)
{

    *n = (*n) * (*n); // 4 * 4
    printf("square = %d\n", *n);
}

// call by value
/*void swap(int a, int b)
{
    int k;
    k = a;
    a = b;
    b = k;
    printf("Swapping of a & b: %d %d\n", a, b);
}*/

//call by reference

void _swap(int *a,int *b){
    int t = *a;
    *a=*b;
    *b=t;
    printf("Swapping of a & b: %d %d\n", *a, *b);
}
