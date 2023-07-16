#include<stdio.h>
void binarysearch(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
	int low=0,high=0,mid;
	low=i;
	high=n-1;
	mid=(low+high)/2;
	if(a[mid]==key)
	{
	return mid;	
	}
	else if(a[mid]>key)
	{
	  high=mid-1;
	}
	else if(a[mid]<key)
	{
		low=mid+1;
	}
}
}
int main()
{
	int n,a[100],i,key;
	scanf("%d%d",&n,&key);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	binarysearch(a,n);
	for(int i=0;i<n;i++)
	{
	  printf("%d",a[i]);
	}
}
