/*2.	Write a program in C to add two numbers using pointers. */
#include <stdio.h>
main()
{
	int a=5,b=5,sum;
	int *aptr,*bptr;
	aptr=&a,bptr=&b;
	sum=*aptr + *bptr;
	printf("The sum=%d",sum);
}