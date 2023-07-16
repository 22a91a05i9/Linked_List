#include<stdio.h>
void bubble_sort(int ar[100],int n)
{
	int i,j,temp,flag=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(ar[j]>ar[j+1])
			{
				flag=1;
				temp=ar[j+1];
				ar[j+1]=ar[j];
				ar[j]=temp;
		    } 
		}
		if(flag==0)
		return;
	}
}

int main()
{
    int ar[100],n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}
	bubble_sort(ar,n);
	for(i=0;i<n;i++)
	{
	printf("%d",ar[i]);
    }
}
