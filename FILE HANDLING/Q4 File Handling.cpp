/*  4.	Write a program to read all data from a file. */
#include <stdio.h>
main()
{
	FILE *file;
	char read;
	char fold[150];//This PC/Local Disk(E:)/Programs 2nd Semister/LAB 11/file.txt
	printf("Enter the path and name for the file:\n");
	scanf("%s",&fold);
	file=fopen("fold","r+");
	if(file==NULL)
	{
		printf("ERROR IN OPENING FILE");
	}
	else
	{
		while(read!=EOF)
		{
			read=fgetc(file);
			printf("%c",read);
		}
	}
	fclose(file);
}