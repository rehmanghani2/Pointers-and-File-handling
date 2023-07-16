/* 9.	Write a program to create a phone book using structures. You should enter Name, Address, and phone number of your friends.  */
#include <stdio.h>
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
}