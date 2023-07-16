#include<stdio.h>
void selectionsort(int A[],int n){
	for(int i=0;i<n;i++)
	{
		int Min-ind=i;
		for(int j=i;j<n;j++)
		{
			Min-ind=j;
			if(A[Min-ind]>A[j])
			Min-ind=A[j];
		}
	}
	int temp=A[j];
	A[j]=A[i];
	A[i]=temp;
}
int main()
{
	int n,a[];
	scanf("%d",&n);
	for(int i=0; i<n; i++)
   {
    scanf("%d",&A[i]);
   }
   selectionsort(A[],n);
   printf("%d",A[]);
}
