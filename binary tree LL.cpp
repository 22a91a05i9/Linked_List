#include<stdio.h>
#include<stdlib.h>
struct NodeLL{
	int data;
	struct NodeLL *next;
};
typedef struct NodeLL NODELL;
NODELL *head=NULL,*temp,*NNLL;
NODELL *newnodeLL(int val)
{
	NNLL=(NODELL *)malloc(sizeof(NODELL));
	NNLL->data=val;
	NNLL->next=NULL;
	return NNLL;
}
void createLL(int val)
{
	NNLL=newnodeLL(val);
	if(head==NULL)
	{
		head=NNLL;
	}
	else
	{
		temp=head;
		while(temp->next)
		{
			temp=temp->next;
		}
		temp->next=NNLL;
	}
}
void displayLL()
{
	temp=head;
	while(temp)
	{
		printf("%d %d %d\n",temp,temp->data,temp->next);
		temp=temp->next;
	}
}
int main()
{
 int val,n,i;
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
 	scanf("%d",&val);
 	createLL(val);
 }
 displayLL();
}
