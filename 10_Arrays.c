#include <stdio.h>

/*Arrays: Collection of similar data types stored at contiguous memory locations

Syntax:
int marks[3];
char name[10];
float price[2];

Input and Output:
scanf("%d",&marks[0]);
printf("%d",marks[0]);

*/

int main() {

int marks[3];
printf("enter phy: ");
scanf("%d",&marks[0]);

printf("enter chem: ");
scanf("%d",&marks[1]);

printf("enter maths: ");
scanf("%d",&marks[2]);

printf("phy=%d,chem= %d,maths= %d",marks[0],marks[1],marks[2]);
return 0;
}
