#include <stdio.h>

/*Functions:  block of code that performs particular task....

--> It can be used multiple times
--> increase code reusability

a.Function can only return one value at a time
b.Changes to parameters in function don't change the values in calling function*/

// Function Prototype/Declaration
/*void printHello();

//Function Definition
void printHello(){
    printf("Hello");
}*/

//Sum of two numbers
int sum(int a, int b);

//Print table
void printTable(int n);

int main()
{

    /*
    //Sum of two numbers
    int a, b;
    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);
    int s = sum(a,b);
    printf("Sum is: %d",s);*/

    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    printf("Multiplication Table: ");
    printTable(n);//argument/actual parameter
    
    return 0;

    // printHello();//Function call
}

int sum(int a, int b)
{
    return a + b;
}

void printTable(int n)//parameter/formal paramter
{
    for(int i=1;i<=10;i++){
        printf("\n%d",i*n);
    }
  
}
