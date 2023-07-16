/* 10.	Write a program to display all phone records stored in Q9 and 10.  */
#include <stdio.h>
#define MAX_LEN 100
main()
{
	FILE *file;
	file=fopen("PhoneBook.txt","r"); //It(name of file) can be entered by keyboard
    if(file==NULL)
    {
    	printf("ERROR IN To OPENING FILE");
	}
	else
	{
		printf("PHONE BOOK CONTENTS\n\n");
		char line[MAX_LEN];  //100
		//printf("%d\n",sizeof(line)); for length of string
		while(fgets(line,sizeof(line),file)!=NULL)
		{
	     int i=0;
	     //parse the line manually by iterating until the new line comes or found
		 while( line[i]!='\n')//line[i]!=',' &&
		 {
		 	printf("%c",line[i]);
		 	i++;
			 }
			 printf("\n");
			 //printf("\t%d\t",i); for checking charcters in line	
		}
		
	}
	fclose(file);
}