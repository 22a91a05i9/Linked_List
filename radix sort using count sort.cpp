#include<stdio.h>







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
