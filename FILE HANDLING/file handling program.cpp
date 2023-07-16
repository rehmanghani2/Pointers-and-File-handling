#include <stdio.h>
#include <stdlib.h>
 #include <conio.h>
 main()
 {
 	FILE *fp;
 	char name[25];
     int age;
 	fp=fopen("newfile.txt","r");
 	if(fp==NULL)
 	printf("ERROR");
 	else
 	{	
	 fscanf(fp,"%s %d",name,&age);
	 printf("Name: %s  Age: %d",name,age);
	 }
	 fclose(fp);
	 getch();
	 return 0;
 }