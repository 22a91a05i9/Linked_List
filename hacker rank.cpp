#include<stdio.h>
void find(int a[],int v,int n)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==v)
        {
            printf("%d",i);
        }
    }
}
int main()
{
    int v,n,a[n];
    scanf("%d%d",&v,&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    find(a,v,n);
}
