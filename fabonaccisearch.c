#include<stdio.h>
int fabonacci(int n,int*a,int se)
{
	int x=0,y=1,z,set=-1,i,min1,min2;
	while(z<n)
	{
		x=y;
		y=z;
		z=x+y;
	}
	while(z>1)
	{
		min1=set+x;
		min2=n-1;
		if(min1<min2)
		{
			i=min1;
		}
		else
		{
			i=min2;
		}
		if(se==a[i])
		{
			return i;
		}
		else if(se>a[i])
		{
			z=y;
			y=x;
			x=z-y;
			set=i;
		}
		else
		{
			z=x;
			y=y-x;
			x=z-y;
		}
	}
	if(y && a[set+1]==se)
	{
		return set+1;
	}
	return -1;
}
int main()
{
	int n,i;
	scanf("%d",&n);
	int a[n],se;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter search element\n");
	  scanf("%d",&se);
	  int r=fabonacci(n,a,se);
	  
	  printf("element found at %d",r);
      
}
