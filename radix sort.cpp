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
void radixsort(int a[],int n)
{
	int max_val=get_max(a,n);
	int p=1;
	while(max_val){
		int matrix[10][n];
		int cnt[10]={0};
		for(int i=0;i<n;i++)
		{
			int digit=(a[i]/p)%10;
			matrix[digit][cnt[digit]]=a[i];
			cnt[digit]++;
		}
		int x=0;
		for(int i=0;i<10;i++)
		{
			for(int j=0;j<cnt[i];j++)
			{
				a[x]=matrix[i][j];
				x++;
			}
		}
	max_val	=max_val / 10;
	p=p*10;
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
	radixsort(a,n);//fun call
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}

