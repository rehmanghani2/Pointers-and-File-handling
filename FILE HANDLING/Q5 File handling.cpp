/*5.	Write a program to read all float values form the file and display their sum.  */
#include <stdio.h>
#include <stdlib.h>
main()
{
	FILE *file;
	float value,sum=0;
     int n;
	 printf("how many flaot values you want in file\n");
	 scanf("%d",&n);
	file=fopen("ffile.txt","w");
	if(file==NULL)
	{
		printf("ERROR IN OPENING FILE");
	}
	else
	{
		printf("Enter float values in file\n");
		int i=0;
		while(i<n)
		{
			scanf("%f",&value);
			fprintf(file,"%.2f\n",value);
			i++;
		}
	}
	fclose(file);
    file=fopen("ffile.txt","r");
    if(file==NULL)
    {
    	printf("ERROR");
	}
	else
	{
		 //size will depend upon on file content
		printf("The float values in file are:\n");
		while(fscanf(file,"%f",&value)!=EOF)
		{
		printf("%.2f ",value); // dispaly on console
		sum+=value; // sum=sum+value
	   }
	}
	printf("\n\nThe sum of all float values in file is %.4f",sum);
	fclose(file);
return 0;	
}