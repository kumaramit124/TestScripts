#include<stdio.h>

//declaring the recursive function
int sumOfDigit(int num);

void main()
{
    int num, sum=0;
    num =108;
    sum = sumOfDigit(num);
    printf("The sum of digits of %d is: %d\n", num, sum);
return;
}

int sumOfDigit(int num)
{
    int s=0, a=0;
    s = s + (num%10);
	printf("s:%d\n",s);    
    a = num/10;
	printf(":%d\n",a);    
    if(a > 0)
    {
        sumOfDigit(a);
    }
    return s;
}
