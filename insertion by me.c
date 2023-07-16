#include<stdio.h>
void  insertion_sort(int A[],int n){
	int i,j,temp;
	for(i=1;i<n;i++)
	{
		temp=A[i];
		j=i-1;
		while(temp<A[j] && j>=0)
		{
			A[j+1]=A[j];
			j--;
		}
		A[j+1]=temp;
	}
}
int main()
{
	int n,i,A[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
   {
    scanf("%d",&A[i]);
   }
    insertion_sort(A,n);
    for(i=0;i<n;i++)
    {
    printf("%d",A[i]);
    }
}
