#include <stdio.h>

void printHW(int count);
int sum(int n);

int main() {

// printHW(5);
int s=sum(5);
printf("Sum is: %d",s);
return 0;
}

//recursive function
void printHW(int count){
    if(count==0){
        return;
    }
    printf("Hello World\n");
    printHW(count-1);
}

int sum(int n){
    if(n==1){
        return 1;
    }
    int sumNm1 = sum(n-1);//sum of 1 to n
    int sumN = sumNm1+n;
    return sumN;
}
