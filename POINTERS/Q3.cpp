/* 3.	Write a program in C to store n elements in an array and print the elements using pointer. */
#include <stdio.h>
main()
{
int n;
printf("Enter how many elements ypu want in array:\n");
scanf("%d",&n);
int a[n];
int *aptr=a; //pointer *aptr point to array a
printf("\nEnter elements in array\n");
for(int i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
printf("\nArray a printed with: \n Array index notation\n");
for(int i=0;i<n;i++)
{
	printf("a[%d]=%d\n",i,a[i]);
}
printf("\nOutput array a using array name and pointer\n");
for(int i=0;i<n;i++)
{
	printf("*(a+%d)=%d\n",i,*(a+i));
}
printf("\nOutput array a using aptr and array index notation\n");
for(int i=0;i<n;i++)
{
	printf("aptr[%d]= %d \n",i,aptr[i]);
}
printf("\nOutput array aptr using array name and pointer\n");
for(int i=0;i<n;i++)
{
	printf("*(aptr+%d)=%d\n",i,*(aptr+i));
}
}