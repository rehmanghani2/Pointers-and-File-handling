/*7.	Write a program to handle 2D array using pointers. */
#include <stdio.h>
#include <conio.h>
main()
{
	int rows,cols;
	printf("Enter the number of rows:\n");
	scanf("%d",&rows);
	printf("Enter the number of columns:\n");
	scanf("%d",&cols);
	int *a[rows][cols];  //declare array of pointers
	printf("Enter the elements in Array:\n");
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		{
			scanf("%d",(*(a+i))+j);
		}
	}
	printf("Elements of the Array are:\n");
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		{
			printf("%d ",*(*(a+i)+j));
		}
		printf("\n");
	}
	getch ();
	return 0;
}