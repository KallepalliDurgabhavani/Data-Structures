#include<stdio.h>
int search(int *a,int n,int se)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(se==a[i])
		{
			return i;
		}
	}
	return -1;
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
	int se;
	scanf("%d",&se);
	int res=search(a,n,se);
	if(res==-1)
	{
		printf("Element is not found");
	}
	else
	{
		printf("Element found at %d",res);
	}
}
