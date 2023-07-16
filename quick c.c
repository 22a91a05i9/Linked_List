#include<stdio.h>
int partition(int *a,int L,int H)
{
    int pivot=a[L],start=L,end=H,temp;
    while(start<end)
    {
    	while(a[start]<=pivot)
    	start++;
    	while(a[end]>pivot)
    	end--;
    	if(start<end)
    	{
    	temp=a[start];
		a[start]=a[end];
		a[end]=temp;	
		}
	}
	temp=a[L];
	a[L]=a[end];
	a[end]=temp;	
}
void quicksort(int *a,int L,int H,int n)
{
	if(L<H)
	{
		int par;
		par=partition(a,L,H);
		quicksort(a,L,par-1,n);
		quicksort(a,par+1,H,n);	
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
	quicksort(a,0,n-1,n);
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}

