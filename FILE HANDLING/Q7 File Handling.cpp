/*7.	Write a program to read lines in a while loop and display each line */
#include <stdio.h>
#define Max_length 100
main()
{
	
	FILE *file;
	char line[Max_length]; // declare string 
	int count=0;
	file=fopen("ffile.txt","r");
    if(file==NULL)
    {
    	printf("ERROR");
	}
	else
	{
		 // read each line
	 printf("Lines read from the file\n");
	while(fgets(line,Max_length,file)!=NULL)
	{
       printf("%s",line);
	}
	}
	fclose(file);
return 0;	
}