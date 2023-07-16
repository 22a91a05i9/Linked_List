#include<stdio.h>
void count(int a[],int n)
{
	int f[100]={0};
	for(int i=0;i<n;i++)
	{
		f[a[i]]++;
	}
	for(int i=1;i<100;i++)
	{
		f[i]=f[i]+f[i-1];
	}
	int b[n];
	for(int i=n-1;i>=0;i--)
	{
		f[a[i]]--;
		b[f[a[i]]]=a[i];
	}	
	for(int i=0;i<n;i++)
	{
		a[i]=b[i];
	}
}
int main()
{
	int a[100],i,n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	count(a,n);//fun call
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
