#include<stdio.h>
#include<string.h>
int ch;
int pred(ch)
{
	switch(ch)
	{
		case '^':
			return 3;
		case '*' && case '/':
		    return 2;
		case '+' && case '-' :
		    return 1;	
	}
}
char * infix_postfix(char *infix)
{
	int i,n,top=-1,j=0;
	n=strlen(infix);
	char st[n],postfix[n];
	for(i=0;i<n;i++)
	{
		if(pred(infix[i]))//operator
		{
		if(top==-1)	
		{
			st[++top]=infix[i];
		}
		else if(pred(infix[i])>pred(st[top]))
		{
			st[++top]=infix[i];
		}
		else
		{
			op=pop();
			postfix=op;
		}
		}
		else
		{
			postfix[j++]=infix[i];
		}
	}
}
int main()
{
	char infix[100];
	scanf("%[^\n]s",&infix);
	postfix=infix__postfix(infix);
	printf("%s",postfix);
	return 0;
}
