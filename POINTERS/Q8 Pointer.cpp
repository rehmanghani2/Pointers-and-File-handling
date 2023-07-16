/* 8.	Write a program to show pointer arithmatci  */
#include <stdio.h>
void increment_decrement(int n);
void traverse_array(int a[],int size);
void add_sub(int n);
main()
{
	int x=100;
	int size=5;
	int a[5]={5,4,3,2,1};
	increment_decrement(x);
	traverse_array(a,size);
	add_sub(x);
}
void increment_decrement(int n)
{
int *ptr,*pt;
ptr=&n;
pt=&n;
printf("Address of ptr or pt varaible is %x\n",ptr);
ptr=ptr+1;
printf("After Increment:\nAddress of ptr variable is %x\n",ptr);
pt=pt-1;
printf("After Decrement:\nAddress of pt variable is %x\n",pt);	
}
void traverse_array(int a[],int size)
{
	int *ptr=a;
	printf("Display array elements:\n");
	for(int i=0;i<5;i++)
	{
	printf("%d ",*(ptr+i));
	}
}
void add_sub(int n)
{
	int num;
	printf("\n\nEnter any number to add or substract with pointer:\n");
	scanf("%d",&num);
	int *ptr,*pt;
	ptr=&n;
	pt=&n;
	printf("\nAddress of ptr or pt variable is %x\n",ptr);
	ptr=ptr+num;
	printf("\n\nAfter adding %d: Address of ptr variable is %x\n",num,ptr);
	pt=pt-num;
	printf("\n\nAfter substract %d: Address of pt variable is %x\n",num,pt);
}