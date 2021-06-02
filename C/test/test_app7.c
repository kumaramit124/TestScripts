#include <stdio.h>

/** which data type is used to staore the length of string (C strlen()) fun. 
 *  lenght of string 
 *  size of object is something, it never be -1
 *  so int / long are ruled out.
 *  we should use - unsigned int / unsigned long
 *
 *  Mostlty people will go with unsighed int, but its not the real answer. 
 *  We know most of the time the string will not go beyond the 4gb.
 *  But if you see the strlen()--> c lib function its return type is  - size_t
 *  Which is typedef is typedef unsigned long size_t. 
 *
 * */
