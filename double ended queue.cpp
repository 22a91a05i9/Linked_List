#include<stdio.h>
int queue[100],size,rear=-1,front=-1;
void enque_rear(int val)
{
	if(front==0 && rear==size-1)
	{
		printf("queue if full \n");
	}
	else if(rear==-1 && front==-1)
	{
	rear=0;
	front=0;
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
	if(rear==-1 && front==-1)
	{
		printf("queue is empty\n");
	}
	while(i!=rear)
	{
		printf("%d",queue[i]);
		i=(i+1)%size;
	}
	printf("%d\n",queue[i]);
}
int deque_front()
{
	int val;
	if(rear==-1 && front==-1)
	{
		return -1;
	}
	else if(rear==front)
	{
	   val=queue[front];
	   rear=-1;
	   front=-1;
	   return val;
	}
	else
	{
	    val=queue[front];
	    front=(front+1)%size;
	    return val;
	}
}
void enque_front(int val)
{
	if(rear==0 && front==size-1)
	{
		printf("queue if full \n");
	}
	else if(rear==-1 && front==-1)
	{
	rear=0;
	front=0;
	queue[front]=val;	
	}
	else
	{
		front=(front+1)%size;
		queue[front]=val;
	}
}
int deque_rear()
{
	int val;
	if(rear==-1 && front==-1)
	{
		return -1;
	}
	else if(front==rear)
	{
		val=queue[rear];
		front=-1;
		rear=-1;
		return val;
	}
	else if(rear==0)
	{
		val=queue[rear];
		rear=size-1;
		return val;
	}
	else
	{
		val=queue[rear];
		rear--;
		return val;
	}
}
int main()
{
	int ch;
	scanf("%d",&size);
	while(1)
	{
		printf("1.enque at rear\n 2.deque at front\n 3.display\n 4.enque at front\n 5.deque at rear\n  6.exit\n");
		scanf("%d",&ch);
		if(ch==1)
		{
			//enque at rear
			int val;
			scanf("%d",&val);
			enque_rear(val);
		}
		else if(ch==2)
        {
        	//deque at front
        	int val;
        	val=deque_front();
		}
		else if(ch==3)
		{
			//display
			display();
		}
		else if(ch==4)
		{
			//enque at front
			int val;
			scanf("%d",&val);
			enque_front(val);
			
		}
		else if(ch==5)
		{
		    //deque at rear
		    int val;
			val=deque_rear();	
		}
		else
		{
			//exit
			break;
		}
	}
}
