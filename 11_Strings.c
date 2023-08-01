#include <stdio.h>

/*Strings: A character array terminated by a '\0'(null character)
null character denotes string termination

Initializing:

char name[] = {'A','R','P','I','T','A'};
char name[] = "Arpita";

String Format Specifier:
%s
char name[]="Arpita";
printf("%s",name);

IMPORTANT!!!.........

scanf() cannot input multi-word strings with spaces
here,
gets() & puts() come into picture

String Functions:

fgets(str,n,file): stops when n-1 chars input or new line is entered
puts(str): output a string
*/

int main()
{

    /*char name[] = "Arpita";
    printf("%s", name);

    char name[50];
    scanf("%s",name);
    printf("Your name is: %s",name);*/

    char str[100];
    fgets(str,100,stdin);
    puts(str);

    return 0;
}
