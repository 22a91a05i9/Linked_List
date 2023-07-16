#include<stdio.h>
int merge(int arr[],int low,int high)
{
	int pivot=arr[low];
	int i=low;
	int j=high;
	while(i<j)
	{
		while(arr[i]<=pivot && i<=high-1)
	    {
		i++;
	    }
	    while(arr[j]>pivot && j>=low+1){
	    j--;
	    }
	    if(i<j)
	    {
	    	int temp=arr[j];
	    	arr[j]=arr[i];
	    	arr[i]=temp;
		}
	}
	arr[low]=arr[j];
	arr[j]=pivot;
	return j;
	}
void quicksort(int arr[],int low,int high)
{
	if(low>high)return;
    int p_index=merge(arr,low,high);
    quicksort(arr,low,p_index-1);
    quicksort(arr,p_index+1,high);
}
int main()
{
	
	int arr[100],i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	quicksort(arr,0,n-1);//fun call
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
