#include<stdio.h>
struct Student{
	char rollno[100],name[100];
	int age,cgpa;
};
typedef struct Student STD;
int main()
{
	STD s[100];
	int n,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%s",s[i].rollno);
		scanf(" %s",s[i].name);
		scanf("%d",&s[i].age);
		scanf("%d",&s[i].cgpa);
		printf("%s %s %d %d",s[i].rollno,s[i].name,s[i].age,s[i].cgpa);
	}
	
}
