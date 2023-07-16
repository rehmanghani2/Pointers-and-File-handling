/*3.	Write a program to append some new text to existing file  */
#include <stdio.h>
main()
{
	FILE *file;
	char fold[150];
	printf("Enter the path and name for the file:\n");
	scanf("%s",&fold);//This PC/Local Disk(E:)/Programs 2nd Semister/LAB 11/file.txt
	file=fopen("fold","a");
	if(file==NULL)
	{
		printf("ERROR IN OPENING FILE");
	}
	else
	{
		fprintf(file,"\nFILE ARE HANDLED BY USING DIFFERENT FUNCTIONS");
	}
	fclose(file);
}