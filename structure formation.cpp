#include<stdio.h>
struct Student
{
	int b;
	char rollno[100],name[100];
	double per;
};
typedef	struct Student STD;
int main()
{
	STD s;
scanf("%s",s.rollno);
scanf(" %[^\n]s",s.name);
scanf("%d",&s.b);
scanf("%lf",&s.per);
printf("%s %s %d %lf",s.rollno,s.name,s.b,s.per);
}


