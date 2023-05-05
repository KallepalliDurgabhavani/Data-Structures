#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int j,f=0;
	printf("enter search element");
	scanf("%d",&j);
	for(i=0;i<n;i++)
	{
		if(a[i]==j)
		{
			f++;
		}
	}
	printf("%d",f);

}
