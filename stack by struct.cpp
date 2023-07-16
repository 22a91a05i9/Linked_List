#include<stdio.h>
struct Stack{
	int *arr;
	int top;
	int cap;
};
struct Stack *Creat_A_Stack(int capacity){
	struct Stack *ss=(struct Stack *)malloc(sizeof(struct Stack));
	ss->cap=capacity;
	ss->top=-1;
    ss->arr=(int *)malloc(stack->cap*sizeof(int));
	return ss;	
}
void push(struct Stack *s,int val)
{
	if(s->top==s->cap-1)return;
	s->top++;
	s->arr[s1->top]=val;
}
int main()
{
	struct Stack *s1 = Creat_A_Stack(5);
	push(s1,10);
	push(s1,20);
	push(s1,30);
	
}
