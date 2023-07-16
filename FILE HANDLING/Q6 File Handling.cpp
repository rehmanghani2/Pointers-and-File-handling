/* 6.	Write a program to read all lines of data from file into an array */
#include <stdio.h>
#define Max_lines 1000
#define Max_length 100
main()
{
	
	FILE *file;
	char line[Max_lines][Max_length];
	int count=0;
	file=fopen("ffile.txt","r");
    if(file==NULL)
    {
    	printf("ERROR");
	}
	else
	{
		 // read each line and store in array
	while(fgets(line[count],Max_length,file)!=NULL)
	{
	count++;
	if (count==Max_lines)
	{
		break;
	}
	}
	}
	fclose(file);
	printf("Lines read from the file\n");
	for(int i=0;i<count;i++)
	{
		printf("%s",line[i]);
	}
	
return 0;	
}