#include <stdio.h>

int main () {

int a=2,b=1;

printf("Bitwise AND Operation on a and b is: %d\n", a&b);
printf("Bitwise OR operation on a and b is: %d\n", a|b);
printf("Bitwise XOR operation on a is: %d\n\n", a^b);

printf("Logical AND Operation on a and b is: %d\n", a&&b);
printf("Logical OR Operation on a and b is: %d\n", a||b);
printf("Logical NOT Operation on a and b is: %d\n", !b);

return 0;
}