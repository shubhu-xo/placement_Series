#include <stdio.h>

int main(void) {
int a = 5;

printf("(%d)*(++%d) = %d, a = %d\n", a, a, (++a)*(++a), a);
a = 5;
printf("(%d++)*(%d++) = %d, a = %d\n", a, a, (a++)*(a++), a);
a = 5;
printf("(++%d)*(%d++) = %d, a = %d\n", a, a, (++a)*(a++), a);
a = 5;
printf("(%d++)*(++%d) = %d, a = %d\n", a, a, (a++)*(++a), a);

return 0;
}