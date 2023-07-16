#include<stdio.h>
void selectionsort(int a[],int n)
{
	int k,temp,pos;
	for(k=0;k<n;k++)
	{
		pos=smallest(a,k,n);
		temp=a[k];
		a[k]=a[pos];
		a[pos]=temp;
	}
}
int smallest(int a[],int k,int n)
{
	int pos=k,small=a[k],i;
	for(i=k+1;i<n;i++)
	{
		if(a[i]<small)
		{
			small=a[i];
			pos=i;
		}
	}
	return pos;
}
int main()
{
	int n,a[100],i,k;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	smallest(a,k,n);
	selectionsort(a,n);
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}
