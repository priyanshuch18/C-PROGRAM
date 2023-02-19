//right a value in  a file 
#include<stdio.h>
int main()
{
	int num;
	FILE *fp;
fp=fopen("C:\\Users\\PRIYANSHU CHOUDHARY\\Desktop\\priyansh.txt","w");
if(fp==NULL)
{
	printf("file not created");
	
}
	printf("file create successfully\n");
	printf("enter a number\n");
	scanf("%d",&num);
	printf("data wrote in file");
	fclose(fp);
	return 0;
}
