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
       Temp=Head;
       while(Temp)
      {
        printf("%d %d %d\n",Temp,Temp->data,Temp->next);
        Temp=Temp->next;
      }
      printf("\n"); 
}
int delete()
{
	NODE *Temp;
	int val;
	if(Head==NULL && Tail==NULL)
    {
         return -1;
    }
    else if(Head==Tail)
    {
    	val=Head->data;
    	Head=NULL;
    	Tail=NULL;
    	return val;
	}
	else
	{
		Temp=Head;
		while(Temp->next->next)
		{
			Temp=Temp->next;
		}
		val=Tail->data;
		Temp->next=NULL;
		Tail=Temp;
		return val;
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
		val=delete();
		if(val==-1)
		{
			printf("No Nodes\n");
		}
		else
		{
			printf("%d\n",val);
		}
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
