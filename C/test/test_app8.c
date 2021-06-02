#include <stdio.h>

int main()
{
    printf("%d\n", printf("%s", "Hello World!"));

    printf("%10s\n", "Hello");
    return 0;

}
/** What is this printf returns?
 *  As we know %s will print the string, 
 *  since here in this program we have print inside the printf, and 
 *  printf will return the number of bytes written.
 *  - It return the no of char written in the screen. 
 *  So answer is - Hellow World!12. 
 * */

