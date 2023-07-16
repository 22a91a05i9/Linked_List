#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node * next;
};
typedef struct Node NODE;
NODE *head=NULL,*tail=NULL;
void insert_endcr(NODE *NN)
{
	if(head==NULL && tail==NULL)
	{
		head==NN;
		tail==NN;
		head->next=head;
	}
	else
	{
	NN->next=head;
	tail->next=NN;
	tail=NN;
	}
}
void display_cr()
{
	NODE *temp;
	if(head==NULL && tail==NULL)
	{
		printf("No nodes");
    }
    else 
    {
    	temp=head;
    	while(temp->next!=head)
    	{
    		printf("%d ",temp->data);
    		temp=temp->next;
		}
		printf("%d\n",temp->data);
    }
}
int delete_endcr()
{
	NODE *temp,*dn;
	if(head==NULL && tail==NULL)
    {
         return -1;
    }
    else if(head==tail)
    {
    	dn=head;
    	head=NULL;
    	tail=NULL;
    	return dn;
	}
	else
	{
		temp=head;
		while(temp->next->next!=head)
		{
			temp=temp->next;
		}
		dn=tail;
		temp->next=head;
		tail=temp;
		return dn;
	}
}
int main()
{
  NODE *NN,* res;
  int val,ch; 
while(1)
{
	printf("1.insert_endcr 2.delete_enddcr 3.display_cr 4.exit");
	scanf("%d",&ch);
if(ch==1)
{
	//insert_enddcr
	scanf("%d",val);
	NN=(NODE *)malloc(sizeof(NODE));
	NN->data=val;
	NN->next=NULL;
	insert_endcr(NN);
}
else if(ch==2)
{
	//delete_endcr
	res=delete_endcr();
	if(res==-1)
		{
			printf("No Nodes\n");
		}
		else
		{
			printf("%d\n",res->data);
			free(res);
		}
}
else if(ch==3)
{
	//display
	display_cr();
}
else
{
	//exit
	break;
}
}
}
