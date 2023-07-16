#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
};
typedef struct node node;
node *head=NULL;
void insert(int val){
node *nn,*temp;
nn=(node *)malloc(sizeof(node));
nn->data=val;
nn->next=NULL;
if(head==NULL)
head=nn;
else{
temp=head;
while(temp->next!=NULL)
temp=temp->next;
temp->next=nn;
}
}
int deletee(){
int val;
node *temp;
if(head==NULL)
return -1;
else if(head->next==NULL){
val=head->data;
head=NULL;
return val;
}
else{
temp=head;
while(temp->next->next!=NULL)
temp=temp->next;
val=temp->next->data;
temp->next=NULL;
return val;
}
}
void display(){
node *temp;
if(head==NULL)
printf("NO NODES\n");
else{
temp=head;
while(temp!=NULL){
printf("%d %d %d\n",temp,temp->data,temp->next);
temp=temp->next;
}
}
}
int main(){
int ch,val,n;

while(1){
printf("1)Insert\t2)Delete\t3)Display\t4)Exit\n");
scanf("%d",&ch);
if(ch==1){
scanf("%d",&val);
insert(val);
}
else if(ch==2){
val=deletee();
if(val==-1)
printf("NO NODES TO DELETE\n");
else
printf("%d\n",val);
}
else if(ch==3)
display();
else
break;
}
}

