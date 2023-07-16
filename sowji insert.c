#include<stdio.h>
void insertionsort(int a[],int n)
{
	int i,temp,j;
	for(i=1;i<n;i++)
	{
		temp=a[i];
		j=i-1;
		if(a[j]>temp && j>=0)
		{
			a[j+1]=a[j];
			j--;
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
	scanf("%d",&a[i]);
	}
	insertionsort(a,n);
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}
