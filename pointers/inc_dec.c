#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *ptr = NULL;
	int *pb = NULL;

	ptr = (int *) malloc (2 * sizeof(int));
	pb = ptr + 1;	
	*ptr = 10;
	*(ptr + 1) = 20;

	printf ("*pb = %d, *--pb = %d, *ptr++ = %d\n",*pb, *--pb, *ptr++);
	free(--ptr);

	return 0;
}
