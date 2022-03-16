#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a[10];
	int i;
	for (i = 0; i < 10; i++) {
		a[i] = i;
	}
	printf ("a = %p, &a[0] = %p\n", a, &a[0]);

#if 0
	printf ("a++ = %p", a++);
	/* ERROR: compile time error
	arrays.c: In function ‘main’:
	arrays.c:8:23: error: lvalue required as increment operand
	    8 |  printf ("a++ = %p", a++);
		  |                       ^~
    make: *** [<builtin>: arrays] Error 1
	*/

#elif 0
	int *pa = a; // pa =  &a[0];
	printf ("pa = %p, &a[0] = %p\n", pa, &a[0]);
	a = pa;
	/* ERROR: compile time error, cannot change address present in a (array)
	arrays.c: In function ‘main’:
	arrays.c:23:4: error: assignment to expression with array type
	   23 |  a = pa;
	      |    ^
    make: *** [<builtin>: arrays] Error 1
	*/
#elif 1
	printf ("*a = %d\n a = %p, a + 1 = %p, (&a[0] + 1) = %p\n &a + 1 = %p\n",
			*a, a, a + 1, (&a[0] + 1), &a + 1);
#endif
	return 0;
}
