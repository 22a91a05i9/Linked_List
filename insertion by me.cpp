#include<stdio.h>
void  insertion_sort(int A[],int n){
	int i,j,temp;
	for(i=0;i<n-1;i++)
	{
		int j=i+1;
		int temp=A[j];
		while(temp<A[j] && j>=0)
		{
			A[j+1]=A[j];
			--j;
			}
			A[j+1]=temp;
			}
}
int main()
{
	int n,i,A[n];
	scanf("%d",&n);
	for(i=0;i<n;i++)
   {
    scanf("%d",&A[i]);
   }
    insertion_sort(A,n);
    printf("%d",A[i]);
}
