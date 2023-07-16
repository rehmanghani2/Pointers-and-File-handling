/*  4.	Write a function to use pass by pointers and swap two numbers.  */
#include <stdio.h>
void swap(int *a,int *b);
main()
{
	int a=5,b=10;
	printf("a=%d , b=%d\n",a,b);
	swap(&a,&b);
	printf("After swaping by using pass by pointers\n a=%d, b=%d",a,b);
}
void swap(int *a,int *b )
{
	int temp=*a;
	*a=*b;
	*b=temp;
}