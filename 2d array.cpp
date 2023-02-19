//array 2d program
#include<stdio.h>
int main()
{
	int a[2][2];
	int i,j;
	printf("enter the element of array ");
	for(i=0;i<2;i++)
	{
	for(j=0;j<2;j++)
{
	scanf("%d ",&a[i][j]);
}
printf("\n"); 
	}
	printf("matrix element\n");
		for(i=0;i<2;i++)
	{
	for(j=0;j<2;j++)
{
	printf("%d ",a[i][j]);
}
printf("\n");
	}
	return 0;
}
