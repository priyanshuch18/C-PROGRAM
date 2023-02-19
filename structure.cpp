#include<stdio.h>
struct stu 
{ int roll;
char name[20];
double marks;
};
int main()
{
	struct stu s;
printf("enter the record of student");
scanf("%d%s%lf", &s.roll,&s.name,&s.marks);
printf("%d  %s  %lf",s.roll,s.name,s.marks);
return 0;
}
