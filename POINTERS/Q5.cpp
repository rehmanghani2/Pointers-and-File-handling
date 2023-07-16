/*5.	Write a program to find the sum of 2 numbers returning a pointer.  */
#include <stdio.h>
#include <stdlib.h>
main()
{
	int num1=5,num2=7;
	int *sumptr;
	*sumptr=num1+num2;
	printf("The sum of two numbers %d and %d returning a pointer %d",num1,num2,*sumptr);
	free(sumptr); //free the dynamically allocated memory
}