/* 11.	Write a program to search phone number by entering name of person  */
#include <stdio.h>
#include <string.h>
#define MAX_CONT 100
struct ph_book{
	char name[20];
	char address[20];
	char ph_number[20];
};
main()
{
	struct ph_book contacts[MAX_CONT];
	FILE *file;
	file=fopen("PhoneBook.txt","w");
	int n; 
	printf("Enter number of contacts you want in Phone Book:\n");
	scanf("%d",&n);
	if(file==NULL)
	{
    	printf("ERROR IN To OPEN FILE");
    	return 1;
	}
	else
	{
	printf("Enter the NAME,ADDRESS,PHONE NUMBER\n");
	fprintf(file,"NAME,ADDRESS,PHONE NUMBER\n");
	for(int i=0;i<n;i++)
		{
		scanf("%s %s %s",contacts[i].name,contacts[i].address,contacts[i].ph_number);
		fprintf(file,"%s,%s,%s\n",contacts[i].name,contacts[i].address,contacts[i].ph_number);
		}
    }
    fclose(file);
	char search_name[20];
	printf("Enter the name to search:\n");
	scanf("%s",&search_name);
	int found=0;
	int i=0;
	while(i<n)
	{
		if(strcmp(contacts[i].name,search_name)==0)
		{
			printf("\nPhone number for %s: %s\n",search_name,contacts[i].ph_number);
			found=1;
			break;
		}
		i++;
	}
	if(!found)
	{
		printf("No phone number found for %s\n",search_name);
	}
	return 0;
}
