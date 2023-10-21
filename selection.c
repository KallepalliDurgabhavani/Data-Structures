#include<stdio.h>
void selection(int n,int*a)
{
	int i,min,j,temp;
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
		if(a[min]>a[j])
		{
			min=j;	
		}
	    }
	    temp=a[i];
	    a[i]=a[min];
	    a[min]=temp;
	}
	
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
	selection(n,a);
	
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
