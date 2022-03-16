#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a = 10;
	int b = 20;
	int *pa = NULL;
	int *pb = NULL;
	int *pc = NULL;
	pa = &a;
	pb = &b;

#if 0 
	// Adition and substraction.

	pc = (int *) (pa + pb);
	/* ERROR: this is a compile time error
	ptr_arithmetic.c: In function ‘main’: 
	ptr_arithmetic.c:16:19: error: invalid operands to binary + (have ‘int *’ and ‘int *’) 
	   16 |  pc = (int *) (pa + pb); 
	      |                   ^ 
	   make: *** [<builtin>: ptr_arithmetic] Error 1 	
	 */
	printf ("pa = %p, pb = %p \n pa + pb = %p\n", pa, pb, pc);
	
	pc = (int *) (pa - pb);
	printf ("pa - pb = %p\n", pc);

#elif 0
	// offset limit
	long int offset = 1;
	while (offset) {
		pa = pa + offset;
		printf ("pa = %p, offset = %ld, *pa = %d\n", pa, offset, *pa);
		offset++;
	}

#elif 1
	
#endif
	return 0;
}	
