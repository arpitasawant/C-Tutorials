#include <stdio.h>

/*operations percedence
1. * / %
2. +-
3. =
*/

int main()
{
    // Associativity(for same precedence)--> left to right
    int a = 4 * 3 / 6 * 2;
    printf("%d", a);
    return 0;
}