#include<stdio.h>
void TakeInput(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
}
void insertion_sort(int *a,int n)
{
	int i,j,temp;
	for(i=1;i<n;i++)
	{
		temp=a[i];
		for(j=i-1;j>=0;j--)
		{
			if(a[j]<temp)
			{
				a[j+1]=temp;
				break;
			}
			else 
			{
				a[j+1]=a[j];
			}
	}
	if(j==-1)
	{
		a[0]=temp;
	}
 }
}
int main()
{
    TakeInput();
	int n,i;
	scanf("%d",&n);
	int a[];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	insertion_sort(a,n);
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
}
