/* 8.	Write a program to create a phone book. You should enter Name, Address, and phone number of your friends. 
Each field should be separated using comma.  */
#include <stdio.h>
#include <conio.h>
main()
{
	
	FILE *file;
	file=fopen("PhoneBook.txt","w");
	int contacts; 
	printf("Enter number of contacts you want in Phone Book:\n");
	scanf("%d",&contacts);
    if(file==NULL)
    {
    	printf("ERROR IN To OPEN FILE");
    	return 1;
	}
	else
	{
      puts("Enter the NAME,ADDRESS,PHONE NUMBER\n");
      char name[20];
      char address[20];
      char ph_number[20];
      fprintf(file,"NAME,ADDRESS,PHONE NUMBER\n");
       int i=0;
      while(i<contacts)
      {
	  scanf("%s %s %s",name,address,ph_number);
	  fprintf(file,"%s,%s,%s\n",name,address,ph_number);
	  i++;
	  }
	}
	fclose(file);
     return 0;	
}