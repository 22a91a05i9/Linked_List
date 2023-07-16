#include<stdio.h>
int get_max(int a[],int n)
{
	int max=0;
	for(int i=0;i<n;i++)
	{
		if(max<a[i])
		{
		max=a[i];	
		}
	}
	return max;
}
void count(int a[],int n)
{
	int max_val=get_max(a,n);
	int p=1;
    while(max_val){
		int f[10]={0};
		for(int i=0;i<n;i++)
		{
			int digit=(a[i]/p)%10;
		f[a[i]]++;
	    }
	for(int i=1;i<10;i++)
	{
		f[i]=f[i]+f[i-1];
	}
	int b[n];
	for(int i=n-1;i>=0;i--)
	{
		f[a[i]]--;
		b[f[a[i]]]=a[i];
	}	
	max_val	=max_val / 10;
	p=p*10;
	}
	for(int i=0;i<n;i++)
	{
		int b[n];
		a[i]=b[i];
	}
	printf("%d",a[i]);
}
	int main()
{
	int a[100],i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	count(a,n);//fun call
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}
