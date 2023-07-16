#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
main()
{
	FILE *ptr ;
	ptr=fopen("myfile.txt","a+");
	//char c=fgetc(ptr);
	//printf("the character I read was %c\n",c);
	//c=fgetc(ptr);
	//printf("the character I read was %c\n",c);
	
	char str[4];
	fgets(str,5,ptr);
	printf("The string is %s \n",str);
	
	//fputc('o',ptr);
	//fputs("Rehman",ptr);
	

	
	fclose(ptr);
	return 0;
}
