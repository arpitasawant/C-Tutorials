#include <stdio.h>

/* Operators Precedence:
1. !
2. * / %
3. +-
4. <,<=,>,>=
5. ==,!=
6. &&
7. ||
8. =
 */

int main()
{
    // Associativity
    //(for same precedence) ----> left to right
    int a = 4 * 3 / 6 * 2;
    printf("%d\n", a);

    /*Relational Operators
    ==
    >,<,>=,<=
    !=
    True = 1,False = 0
    */
    printf("%d\n", 3>=3);

    /*Logical Operators
    && = AND
    || = OR
    ! = NOT
    */

    printf("%d", 3>4 && 4>=4);
    printf("%d", 3>4 || 4>=4);
    printf("%d", !(3>4 && 4>=4));

    /*
    Assignment Operators(shorthand operator)
    = , += , -= , *= , /= , %=
    */
    return 0;
}
