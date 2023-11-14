#include <stdio.h>
 
/*Arrays: Collection of similar data types stored at contiguous memory locations

Syntax:
int marks[3];
char name[10];
float price[2];

Input and Output:
scanf("%d",&marks[0]);
printf("%d",marks[0]);

Arrays as Function Argument:

Function Declaration:

void printNumbers(int arr[],int n);
or
void printNumbers(int *arr,int n);

Function call:

printNumbers(arr,n);

Multidimensional Arrays:
2d arrays

int arr[][] = {{1,2},{3,4}};//Declare
*/

void printNumbers(int arr[], int n);

int main()
{

    /*int marks[3];
    printf("enter phy: ");
    scanf("%d",&marks[0]);

    printf("enter chem: ");
    scanf("%d",&marks[1]);

    printf("enter maths: ");
    scanf("%d",&marks[2]);

    printf("phy=%d,chem= %d,maths= %d",marks[0],marks[1],marks[2]);*/

    /*Array is a Pointer:
    int *ptr = &arr[0];
    or
    int *ptr = arr;

    int aadhar[5];
    int *ptr = &aadhar[0];
    for (int i = 0; i < 5; i++)
    {
        printf("%d index: \n", i);
        scanf("%d", (ptr + i));
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d index=%d \n", i, *(ptr + i));

        // another way
        //  printf("%d index=%d \n",i,aadhar[i]);
    }*/
    int arr[] = {1, 2, 3, 4, 5};
    // printNumbers(arr, 5);

    printf("%d \n",*(arr+2));//arr[2]
    printf("%d \n",*(arr+5));//o/p=0

    return 0;
}

void printNumbers(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
}
