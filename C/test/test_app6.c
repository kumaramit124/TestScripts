#include <stdio.h>

/*what data type is most sutable for 10GB partition storage
int, long, unsigned int, unsigned long
How many bytes are required to store this value. 
int --> 4bytes; 32bits; 2^32-1/ 111111111 11111111 11111111 11111111
                                |                                  |
			       MSB				  LSB
Can size of a disk is -ve number - no so signed data type is ruled out. 
2^32 = 2^2*2^30 = 4*2^10*2^10*2^10 = 4*KB*KB*KB = 4GB
so from the above explanation the unsigned int is not the correct answer. 

unsigned long --> it contains 8 byte of data. 
*/

int main()
{

}
