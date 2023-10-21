#include<stdio.h>
void insertion(int *a,int n)
{
	int i,j,key;
	for(i=1;i<n;i++)
	{
		key=a[i];
		for(j=i-1;;j--)
		{
			if(a[j]<key || j==-1)
			{
				a[j+1]=key;
				break;
			}
			else
			{
				a[j+1]=a[j];
			}
			
		}
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
	insertion(a,n);
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	
}
