#include <stdio.h>
int main()
{
	if(sizeof(int)>-1)
		printf("True\n");
	else
		printf("False\n");
	return 0;
}
/*
 * The answer of this qn is false.
 * The operands must be of same data type 
 * int or unsigned int or unsigned long ==?
 * -1 is a signed integer.
 *  if one is unsigned other treated as unsigned so -1 treated as unsigned number 
 *  which will be 0xfffffffff.... 
 *  That is why the answer is false.
 * */
