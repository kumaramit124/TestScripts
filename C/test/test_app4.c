#include <stdio.h>

int main()
{
	char *p = 0;//here we are creating char pointer and assigining the value 0

	*p ='A'; //here we are trying to access the memory location 0, and trying to do the write operation. 
	printf("Value p= %c\n", *p);

	return 0;
}
/*
 * This gives seg falut
 *
 *
 * */
