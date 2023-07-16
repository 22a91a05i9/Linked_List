#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node * next;
};
typedef struct Node NODE;
int main()
{
	struct Node *n1=malloc(sizeof(NODE));
	n1->data=10;
	n1->next=NULL;
	struct Node *n2=malloc(sizeof(NODE));
	n2->data=20;
	n2->next=NULL;
	struct Node *n3=malloc(sizeof(NODE));
	n3->data=30;
	n3->next=NULL;
	struct Node *n4=malloc(sizeof(NODE));
	n4->data=40;
	n4->next=NULL;
	//CONNECTING LINKEDLIST
	n1->next=n2;
	n2->next=n3;
	n3->next=n4;
	printf("%d\n",n1->data);
	printf("%d\n",n1->next->data);
	printf("%d\n",n1->next->next->data);
	printf("%d\n",n1->next->next->next->data);
	NODE *temp=n1;
	while(temp!=NULL)
	{
		printf("%d",temp->data);
		temp=temp->next;
	}
}
