#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node * next;
};
typedef struct Node NODE;
NODE *Head=NULL,*Tail=NULL;
void insert(NODE * NN)
{
	if(Head==NULL && Tail==NULL)
	{
		Head=NN;
		Tail=NN;
	}
	else{
		Tail->next=NN;
		Tail=NN;
	}
}
void display()
{
    NODE *Temp;
    if(Head==NULL && Tail==NULL)
    {
         printf("No Nodes\n");	
	}
	else
	{
       Temp=Head;
       while(Temp)
      {
        printf("%d %d %d",Temp,Temp->data,Temp->next);
        Temp=Temp->next;
      }
      printf("\n");
    } 
}
void delete()
{
	NODE *Temp;
	if(Head==NULL && Tail==NULL)
    {
         printf("No Nodes\n");
    }
    else if(Head==Tail)
    {
    	Head=NULL;
    	Tail=NULL;
	}
	else
	{
		Temp=Head;
		while(Temp->next->next)
		{
			Temp=Temp->next;
		}
	
		Temp->next=NULL;
		Tail=Temp;
	}
}
int main()
{
   NODE *NN;
   int ch,val;
   while(1)
   {
   	  printf("1.insert 2.delete 3.display 4.exit:");
      scanf("%d",&ch);
      if(ch==1)
     {
    	//insert
    	scanf("%d",&val);
    	NN=(NODE *)malloc(sizeof(NODE));
    	NN->data=val;
    	NN->next=NULL;
    	insert(NN);
   	 }
	else if(ch==2)
	{
		//delete
		delete();
		//printf("%d",*Temp);
	}
	else if(ch==3)
	{
		//display
		display();
	}
	else
	{
		break;
	}
  }
}
