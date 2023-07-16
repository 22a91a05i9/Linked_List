#include<stdio.h>
#include<stdlib.h>
struct Node{
	struct Node *left;
	int data;
	struct Node *right;	
};
typedef struct Node NODE;
NODE *root=NULL,*temp,*NN,*par;
NODE *NewNode(int val)
{
	NN=(NODE *)malloc(sizeof(NODE));
	NN->data=val;
	NN->right=NULL;
	NN->left=NULL;
	return NN;
}
void insert(int val)
{
	NN=NewNode(val);
	temp=root;
	if(root==NULL)
	{
		root=NN;
		return;
	}
	while(1)
	{
	if(temp->data==NN->data)
    {
    	printf("element is already in bst\n");
    	break;
	}
	else  if(temp->data >NN->data)
	{
		if(temp->left!=NULL)
		{
			temp=temp->left;
		}
		else
		{
			temp->left=NN;
			return;
		}
	}
	else  if(temp->data <NN->data)
	{
		if(temp->right!=NULL)
		{
			temp=temp->right;
		}
		else
		{
			temp->right=NN;
			return;
		}
	}
}
}
int search(int val)
{
temp=root;
if(root==NULL)
{
	return 0;
}
while(temp)
{
if(temp->data==val)	
{
return 1;
}
else if(temp->data>val)
{
	temp=temp->left;
}
else if(temp->data<val)
{
	  temp=temp->right;
}
return 0;
}
}
void inorder(NODE *root)
{
	if(root!=NULL)
	{
		inorder(root->left);
		printf("%d",root->data);
		inorder(root->right);	
	}
}
void preorder(NODE *root)
{
	if(root!=NULL)
	{
		printf("%d",root->data);
		inorder(root->left);
		inorder(root->right);	
	}
}
void postorder(NODE *root)
{
	if(root!=NULL)
	{
		inorder(root->left);
		inorder(root->right);
		printf("%d",root->data);	
	}
}
int main()
{
	 NODE *NN;
   int ch,val,key;
   while(1)
   {
   	  printf("1.insert\n 2.delete\n 3.search\n 4.inorder\n 5.preorder\n 6.postorder\n 7.level order");
      scanf("%d",&ch);
      if(ch==1)
      {
      	//insert
      	scanf("%d",&val);
      	insert(val);
	  }
	  else if(ch==2)
	  {
	  	//delete
	  }
	  else if(ch==3)
	  {
	  	//search
	  	scanf("%d",&key);
	  	if(search(key))
	  	{
	  	printf("element found\n");	
		}
		else
		{
		printf("element not found\n");		
		}
	  }
	  else if(ch==4)
	  {
	  	//inorder
	  	inorder(root);
	  }
	  else if(ch==5)
	  {
	  	//preorder
	  	preorder(root);
	  }
	  else if(ch==6)
	  {
	  	//postorder
	  	postorder(root);
	  }
	  else
	  {
	  //level order
	  }  
}
}

