#include<stdio.h>

int main()
{
    int a[] = {1,2,3,4};
    int *ptr;
    ptr = a;

    printf("arr: %p, ptr: %p, val: %d, 3rd element: %d\n", a, ptr, *ptr, *ptr+2);
return 0;
}
