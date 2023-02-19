//string first program
#include<stdio.h>
#include<string.h>
int main()
{
	char str[50],str2[50];
	puts("enter the string");
	gets(str);
	puts("enter the string2");
	gets(str2);
	
	if(strcmp(str,str2)==0)
	{
		printf("both are equal");
	}
	else{
		printf("both are not equal");
	}
	return 0;
	
}
