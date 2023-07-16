#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node * next;
};
typedef struct Node NODE;
NODE *head=NULL;
void insert_head(NODE *NN){
	if(head==NULL)
	{
		head=NN;
	}
	else
	{
		NN->next=head;
		head=nn;
	}
}
void insert_end(NODE *NN){
	if(head==NULL)
	{
		head=NN;
	}
	else
	{
		NODE *temp=head;
		while(temp->next!=NULL)
		{
		temp=temp->next;	
		}
		temp=NN;
	}
}
void display()
{
	NODE *temp;
	if(head==NULL)
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
}
void delete_head()
{
	if(head==NULL)
	{
		printf("no nodes\n");
	}
	else
	{
		NODE *dn=head;
		head=head->next;
		//deallocate memory
		free(dn);
	}
}
int main()
{
  NODE *NN;
  int val,ch; 
while(1)
{
printf("1.insert_head 2.delete_head 3.display 4.insert_end 5.delete_end 6.exit");
scanf("%d",&ch);
if(ch==1)
{
	//insert_head
	scanf("%d",&val);
	NN=(NODE *)malloc(sizeof(NODE));
	NN->data=val;
	NN->next=NULL;
	insert_head(NN);
}
else if(ch==3)
{
	delete_head();
}
else if(ch==4)
{
	//insert_end;
	scanf("%d",&val);
    NN=(NODE *)malloc(sizeof(NODE));
    NN->data=val;
    NN->next=NULL;
    insert_headcr(NN);
}
else if(ch==3)
{
	//display
	display();
}
}
