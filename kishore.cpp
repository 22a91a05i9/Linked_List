#include<stdio.h>
void count(int a[],int n)
{
	int b;
	int cnt[10]={0};
		for(int i=0;i<n;i++)
		{
			b=a[i];
		    for(int j=0;j<=cnt[i];j++)
		    {
			digit=j;
			cnt[digit]++;
		    }
        }
        for(int i=0;i<10;i++)
        {
        	int s,r=0;
        	s=cnt[i];
        	r=r+cnt[i];
		}
		
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
		printf("%d ",a[i]);
	}
}

