#include <stdio.h>
int main(){
    /*
    Loop Control Instructions:
    To repeat some parts of the program

    Types:
        for,while,do while
        
    i++ use,then increase
    ++i increase,then use    
     
    */

   //For loop
    /*for(int i=1;i<=5;i++){
        printf("Hello Arpita..!\n");
    }

    //While Loop

    int i=1;
    while(i<=5){
        printf("Hello\n");
        i++;
    };

    //do while loop

    int i=1;
    do{
        printf("%d\n",i);
        i++;
    }while (i<=5);
    
    //Break Statement : exit the loop

    for(int i=1;i<=5;i++){
        if(i==3){
            break;
        }
        printf("%d\n",i);
    }
    printf("end");*/

    //Continue Statement : skip to next iteration

    for(int i=1;i<=5;i++){
        if(i==3){
            continue;//skip
        }
        printf("%d\n",i);
    }



    return 0;
}
