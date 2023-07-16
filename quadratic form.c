#include<stdio.h>
#include<stdlib.h>
struct node{
	float coeff;
	int expo;
	struct node *next;
};
typedef struct node NODE;
NODE *head=NULL;
void insert_term(NODE *term)
{
	if(head==NULL)
	{
		head=term;
	}
	else
	{
		NODE *temp=head;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=term;
	}
}
void display()
{
	NODE *temp=head;
	while(temp!=NULL)
	{
		printf("(%.1fx^%d)",temp->coeff,temp->expo);
		if(temp->next!=NULL)
		{
			printf("+");
		}
		else
		{
			printf("\n");
		}
		temp=temp->next;
	}
}
void create_polynomial()
{
	int n,i;
	printf("Enter no of terms: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		float co;
		int ex;
		printf("Enter coefficient of term %d: ",i+1);
		scanf("%f",&co);
		printf("Enter exponent of term %d: ",i+1);
		scanf("%d",&ex);
		NODE *term=malloc(sizeof(NODE));
		term->coeff=co;
		term->expo=ex;
		term->next=NULL;
		insert_term(term);
	}
}
int main()
{
	printf("POLYNOMIAL: \n");
	create_polynomial();
	display();
	//create_polynomial
	
	//print_polynomial
	
	//insert_term
}
