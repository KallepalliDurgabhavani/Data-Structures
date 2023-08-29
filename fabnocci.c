#include<stdio.h>
int main()
{
	int n,i,a=0,b=1;
	int c=a+b;
	scanf("%d",&n);
	while(c<n)
	{
		a=b;
		b=c;
		c=a+b;
	}
		printf("%d",c);

		
}
