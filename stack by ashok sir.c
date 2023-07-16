#include<stdio.h>
#include<limits.h>
#define Stack_Size 5
#define Empty (-1)
#define Stack_Empty INT_MIN 
int Top=Empty;
int MyStack[5];
int push(int value)
{
	if(Top==Stack_Size-1)
	{
		return 0;
	}
	Top++;
	MyStack[Top]=value;
	return 1;
}
int pop(){
	if(Top==-1)return Stack_Empty;
	int res=MyStack[Top];
	Top--;
	return res;
}
int size()
{
	return Top+1;
}
int top(){
	if(Top==-1)return Stack_Empty;
	int res=MyStack[Top];
}
int Is_empty(){
	return Top==-1;
}
int main()
{
	push(10);
	push(20);
	push(30);
	push(40);
	while(!Is_empty()){
		printf("%d\n",top());
		pop();
	}
}
