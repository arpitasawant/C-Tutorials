#include <stdio.h>

/*Conditional Statements
1.if-else
2.switch*/
int main() {
    
    /*If-else
    if(condition){
       // do something if true
    }
    else{
       // do something if False
    }*/

    int age;
    printf("Enter Age: ");
    scanf("%d",&age);
    if(age>=18){
        printf("You are an adult");
    }
    else{
       printf("You are not an adult");
    }
    return 0;
}