#include<stdio.h>
void printarray(int n,int*a)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
}
int get_max(int n,int*a)
{
	int max=0,i;
	for(i=0;i<n;i++)
	{
		if(max<a[i])
		{
			max=a[i];
		}
	}
	return max;
}
void radix(int n,int*a)
{
   int max=get_max(n,a);
   int e=1;
   while(max)
   {
   	int counts[10]={0};
   	int b[10][n],i,place,j;
   	for(i=0;i<n;i++)
   	{
   		place=(a[i]/e)%10;
   		b[place][counts[place]++]=a[i];
	}
   	   int k=0;
   	   for(i=0;i<10;i++)
   	   {
		  for(j=0;j<counts[i];j++)
		  {
		  	a[k++]=b[i][j];
		  }
		}
	   e*=10;
	   max/=10;
    }
	   printarray(n,a);	
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
	radix(n,a);
	
}
