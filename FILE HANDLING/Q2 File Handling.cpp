/*2.	Write a program to write some text to a file.   */
#include <stdio.h>
main()
{
	FILE *file;
	char fold[150];//This PC/Local Disk(E:)/Programs 2nd Semister/LAB 11/file.txt
	printf("Enter the path and name for the file:\n");
	scanf("%s",&fold);
	file=fopen("fold","w");
	if(file==NULL)
	{
		printf("ERROR IN OPENING FILE");
	}
	else
	{
		fprintf(file,"WELCOME TO FILE HANDLING IN C");
	}
	fclose(file);
}