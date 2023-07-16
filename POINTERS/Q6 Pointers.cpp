/* 6.	Call a function without using its name using pointers.*/
#include <stdio.h>
void function(int a);
main()
{
  void  (*f)(int)=function;
  int a;
  printf("Enter any number to pass to function using pointers:\n");
  scanf("%d",&a);
  (*f)(a);	
}
void function(int x)
{
	printf("\nWELCOME TO CALL A FUNCTION USING POINTERS\n");
	printf("You Passed a %d number to function using pointer\n",x);
}