#include <stdio.h>
int main()
{
	int a, b=1, c=1;

	a = sizeof(c=++b +1);
	printf("a=%d, b=%d, c=%d\n", a,b,c);
	
	return 0;
}
/*
 *Sizeof is a compile time operation.
 * The expression given in the sizeof will not be execute, because sizeof operator does not calculate the size at runtime it calculate at complie time
 *
 * */
