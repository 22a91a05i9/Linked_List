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
      printf("\n");
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
int count()
{
	NODE *Temp;
	int c=0;
	if(Head==NULL && Tail==NULL)
	{
		return 0;
	}
	Temp=Head;
	while(Temp)
	{
		c++;
		Temp=Temp->next;
	}
		return c;
}
void insert_head(NODE *NN)
{
	if(Head==NULL && Tail==NULL)
	{
		Head=NN;
		Tail=NN;
	}
	else
	{
		NN->next=Head;
		Head=NN;
	}
}
NODE * delete_head()
{
	NODE *Temp;
	if(Head==NULL && Tail==NULL)
    {
         return NULL;
    }
    else if(Head==Tail)
    {
    	Temp=Head;
    	Head=NULL;
    	Tail=NULL;
    	return Temp;
	}
    else
    {
    	Temp=Head;
    	Head=Head->next;
    	Temp->next=NULL;
    	return Temp;
	}
}
int search(int n)
{
	int cnt=0;
	NODE *Temp;
	Temp=Head;
	while(Temp)
	{
	  if(n==Temp->data)
	  {
	  	cnt=cnt+1;
	  } 
	  Temp=Temp->next;
    }
	  return cnt;	
}
void reverse(int cnt)
{
	int arr[cnt],i;
	NODE *Temp;
	Temp=Head;
	for(i=0;i<cnt;i++)
	{
		arr[i]=Temp->data;
		Temp=Temp->next;
	}
	for(i=cnt-1;i>=0;i--)
	{
		printf("%d",arr[i]);
	}
	printf("\n");
}
int main()
{
   NODE *NN,*res;
   int n,c=0,ch,val;
   while(1)
   {
   	  printf("1.insert 2.delete 3.display 4.count 5.insert_head 6.delete_head 7.search 8.reverse 9.exit:");
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
	else if(ch==4)
	{
		printf("%d\n",count());
	}
	else if(ch==5)
	{
        scanf("%d",&val);
    	NN=(NODE *)malloc(sizeof(NODE));
    	NN->data=val;
    	NN->next=NULL;
    	insert_head(NN);
	}
	else if(ch==6)
	{
		res=delete_head();
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
	else if(ch==7)
	{
		scanf("%d",&n);
		printf("%d",search(n));
	}
	else if(ch==8)
	{
		reverse(count());
	}
	else
	{
		break;
	}
  }
}
