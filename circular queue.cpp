#include<stdio.h>
int queue[100],rear=-1,front=-1,size;
void enque(int val)
{
 if(front==0 && rear=size-1)
 {
 	printf("Queue is empty\n");
 }	
 else if(rear==front-1)
 {
 	printf("Queue is full\n")''
 }
 else if(front==-1 && rear==-1)
 {
 	front=0;
 	rear=0;
 	queue[rear]=val;
 }
 else
 {
 	rear=(rear+1)%size;
 	queue[rear]=val;
 }
}
void display()
{
	int i=front;
	if(front==-1 && rear==-1)
	{
		printf("Queue is empty\n");
	}
	while(i!=rear)
	{
		printf("%d",queue[i]);
		i=(i+1)
	}
}
int deque()
{
	int val;
  if(front==-1 && rear==-1)
  {
  	return -1;
  }
  else
  {
  	if(front=rear)
	  {
  	front=0;
 	rear=0;
 	queue[front]=val;
	  }
	else
   {
 	front=(front+1)%size;
 	queue[front]=val; 
  }
}
int main()
{
   int ch;
   scanf("%d",&size);
   while(1)
   {
   	printf("1.enque 2.deque 3.display 4.view front 5.view rear 6.exit:");
   	scanf("%d",&ch);
   	if(ch==1)
   	{	
   	  //enque operation
   	 int val;
   	scanf("%d",&val);
   	enque(val);
	}
	else if(ch==2)
	{
		//deque operation
		int val=deque();//fun call
		if(val==-1)
		{
			printf("Queue is empty\n");
		}
		else
		{
			printf("%d\n",val);
		}
	}
	else if(ch==3)
	{
	display();	
	}
	else if(ch==4)
	{
     return -1;
	}
	else if(ch==5)
	{
	return -1;	
	}
	else if(ch==6)
   }	
}
