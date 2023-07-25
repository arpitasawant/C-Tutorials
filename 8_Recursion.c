#include <stdio.h>

/*Properties of recurison

a.Anything that can be done with iteration,can be done with recursion and vice-versa
b.Recursion can sometimes give the most simple solution
c.Base Case is the condition which steps recursion
d.iteration has infinite loop and recursion has stack overflow*/
void printHW(int count);
int sum(int n);

int main() {

// printHW(5);
int s=sum(3);
printf("Sum is: %d",s);

   
}

//recursive function
void printHW(int count){
    if(count==0){
        return;
    }
    printf("Hello World\n");
    printHW(count-1);
}

//sum of n natural numbers
int sum(int n){
    if(n==1){
        return 1;
    }
    int sumNm1 = sum(n-1);//sum of 1 to n
    int sumN = sumNm1+n;
    return sumN;
}

