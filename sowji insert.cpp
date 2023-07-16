#include<stdio.h>
void insertionsort(int a[100],int n)
{
	int i,temp;
	for(i=0;i<n;i++)
	{
		temp=a[i];
		j=i-1;
		if(a[i]>temp && j>=0)
		{
			a[i]=a[j+1];
			j--
		}
		a[j+1]=temp;
	}
}
int main()
{
	int a[100],n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i])	
	}
	insertionsort(a,n);
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}
