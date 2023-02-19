#include<stdio.h>
int sum()//user defined function
{ int a,b;
printf("enter any two number");
scanf("%d%d",&a,&b);

return a+b;
}
int main()
{
	int store=sum();
	
	printf("%d", store);
}
