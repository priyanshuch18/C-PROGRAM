//read a value in  a file 
#include<stdio.h>
int main()
{
	int num;
	FILE *fp;
if((fp=fopen("C:\\Users\\PRIYANSHU CHOUDHARY\\Desktop\\priyansh.txt","r"))==NULL)
{
	printf("error occured");
	
}
	fscanf(fp,"%d",&num);
	printf("%d",num);
	fclose(fp);
	return 0;
}
