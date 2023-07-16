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
		head=NN;
		tail=NN;
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
    	while(temp->next!=NULL)
    	{
    		printf("%d ",temp->data);
    		temp=temp->next;
		}
		printf("%d\n",temp->data);
    }
}
NODE *delete_endcr()
{
	NODE *temp,*dn;
	if(head==NULL && tail==NULL)
    {
         return NULL;
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
void insert_headcr(NODE *NN)
{
	if(head==NULL && tail==NULL)
	{
		head=NN;
		tail=NN;
		head->next=head;
	}
	else if(tail==head)
	{
		head=NN;
		tail->next=head;
	}
	else
	{
		NN->next=head;
		head=NN;
		tail->next=NN;
	}
}
NODE * delete_headcr()
{
    NODE *temp;
	if(head==NULL && tail==NULL)
    {
         return NULL;
    }
    else if(head==tail)
    {
    	temp=head;
    	head=NULL;
    	tail=NULL;
    	return temp;
	}
    else
    {
    	temp=head;
    	head=head->next;
    	temp->next=NULL;
    	tail->next=head;
    	return temp;
	}
}
void insert_at_pos(NODE *NN,int pos)
{
	int c=1;
	NODE *temp=head;
	if(head->next=NULL ||pos==1){
		insert_headcr(NN);
	}
	else if(head==NULL)
	{
		printf("No Nodes");
	}
	else
	{
		while(c<pos-1 && temp->next !=NULL )
		{
			temp=temp->next;
			c++;
		}
		NN->next=temp->next;
		temp->next=NN;
	}
}
int main()
{
  NODE *NN,* res;
  int val,ch; 
while(1)
{
printf("1.insert_endcr 2.delete_enddcr 3.display_cr 4.insert_headcr 5.delete_enddcr 6.insert_at_pos 7.delete_at_pos 8.exit");
scanf("%d",&ch);
if(ch==1)
{
	//insert_enddcr
	scanf("%d",&val);
	NN=(NODE *)malloc(sizeof(NODE));
	NN->data=val;
	NN->next=NULL;
	insert_endcr(NN);
}
else if(ch==2)
{
	//delete_endcr
	res=delete_endcr();
	if(res==NULL)
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
else if(ch==4)
{
	//insert_headcr;
	scanf("%d",&val);
    NN=(NODE *)malloc(sizeof(NODE));
    NN->data=val;
    NN->next=NULL;
    insert_headcr(NN);
}
else if(ch==5)
{
	res=delete_headcr();
	if(res==NULL)
	{
		printf("No Nodes\n");
	}
	else
	{
    	printf("%d\n",res->data);
		free(res);
	}
}
else if(ch==6){
	//insert at pos
	int pos;
	printf("enter a position to insert: ");
	scanf("%d",&pos);
	int val;
	printf("enter value to be inserted at pos: ");
	scanf("%d",&val);
	NN=(NODE *)malloc(sizeof(NODE));
    NN->data=val;
    NN->next=NULL;
    insert_at_pos(NN,pos);
}
else if(ch==7)
{
	
}
else
{
	//exit
	break;
}
}
}
