#include<stdio.h>
struct Student{
	char rollno[100],name[100];
	int age,cgpa;
};
typedef struct Student STD;
void printStructure(STD *s)
{
   printf("%s %s %d %d",s->rollno,s->name,s->age,s->cgpa);	
}
int main()
{
	STD s;
	STD *s_ptr;
	s_ptr=&s;
	scanf("%s",s_ptr->rollno);
	scanf(" %s",s_ptr->name);
	scanf("%d",&s_ptr->age);
	scanf("%d",&s_ptr->cgpa);
	printStructure(s_ptr);	
}
