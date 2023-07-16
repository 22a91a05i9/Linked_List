#include<stdio.h>
void merge(int a[],int low,int mid,int high)
{
	int i=low;
	int j=mid+1;
	int x=0;
	int b[100];
	while(i<=mid && j<=high){
		if(a[i]<a[j]){
			b[x++]=a[i++];
		}
		else
		b[x++]=a[j++];
	}
	while(i<=mid)
	b[x++]=a[i++];
	while(j<=high)
	b[x++]=a[j++];
	for(i=low;i<=high;i++)
	{
		a[i]=b[i-low];
	}
}
void merge_sort(int a[],int low,int high)
{
	int mid;
	if(low==high) return;
	mid=(low+high)/2;
	merge_sort(a,low,mid);
	merge_sort(a,mid+1,high);
	merge(a,low,mid,high);
}
int main()
{
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	merge_sort(a,0,n-1);
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
}


