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
        printf("%d %d %d\n",Temp,Temp->data,Temp->next);
        Temp=Temp->next;
      }
      printf("\n");//menu driven programs needs extra spaces
      }
}
NODE * delete()
{
	NODE *Temp,*dn;
	if(Head==NULL && Tail==NULL)
    {
         return NULL;
    }
    else if(Head==Tail)
    {
    	dn=Head;
    	Head=NULL;
    	Tail=NULL;
    	return dn;
	}
	else
	{
		Temp=Head;
		while(Temp->next->next)
		{
			Temp=Temp->next;
		}
		dn=Tail;
		Temp->next=NULL;
		Tail=Temp;
		return dn;
	}
}
int main()
{
   NODE *NN,*res;
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
		res=delete();
		if(res==NULL)
		{
			printf("No Nodes\n");
		}
		else
		{
			printf("%d\n",res->data);
			free(res);
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
