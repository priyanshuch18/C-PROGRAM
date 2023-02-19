#include<stdio.h>
union stu 
{ int roll;
char name[20];
double marks;
};
int main()
{union stu s;
printf("enter the record of student\n");
printf("enter the roll no");
scanf("%d",&s.roll);
printf("enter the name");
scanf("%s",&s.name);
printf("enter the marks");
scanf("%lf",&s.marks);
printf("the result is\n");
printf("%d %s %lf\n",s.roll,s.name,s.marks);
if(s.marks<33)
{printf("FAIL Khatam tata bye bye gya");

}
else{
	printf("PASS Hogya :)");
}
return 0;
}
