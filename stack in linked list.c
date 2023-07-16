#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
typedef struct node *NODE;
NODE *head=NULL;
int n;
void insert(int val)
{
	NODE *NN,temp,
	if(head==NULL)
	{
		printf("stack in linked list is empty");
	}
	else if(head!=NULL)
	{
		head=NN;
	}
	else
   {

		temp=head;
        while(temp->next!=NULL)
temp=temp->next;
temp->next=nn;	
		}
	}
}
void display()
{
	if(head==NULL)
	{
	printf("stack in linked list is empty");
	}
	else{
		int temp;
		NODE *head=temp;
		while(temp!=NULL)
		{
			printf("%d",temp->data);
			temp=temp->next;
		}
	}
}
int delete()
{
	if(head==NULL)
	{
		printf("stack in linked list is empty");
	}
	else
	{
		head=temp;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=NULL;
		val=temp->data;
		return val;
	}
}
int main()
{
	int ch,val,n;
	scanf("%d",&n);
while(1)
{
	printf("1.insert 2.delete 3.display 4.exit");
	scanf("%d",&ch);
if(ch==1)
{
	NN=(NODE *)malloc(sizeof(NODE));
	NN->data=val;
	NN->next=NULL;
	scanf("%d",&val);
	insert(val);
}
else if(ch==2)
{
	val=delete();
	if(val==-1)
	{
		printf("stack in linked list is empty");
	}
	else
	{
		printf("%d",val);
	}
}
else if(ch==3)
{
	display();
}
else
{
	exit();
}
}
}
}
