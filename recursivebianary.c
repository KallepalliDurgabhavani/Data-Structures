#include<stdio.h>
int binary(int *a,int n,int se,int low,int high)
{
	int i,mid;
	if(low>high) return -1;
	else
	{
		mid=(low+high)/2;
	if(se==a[mid])return mid;
	else if(se>a[mid])  binary(a,n,se,mid+1,high);
	else binary(a,n,se,low,mid-1);
	
}

}
int  main()
{
	int n;
	scanf("%d",&n);
	int a[n],i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int se;
	printf("enter search element\n");
	scanf("%d",&se);
	 int ele=binary(a,n,se,0,n-1);
	 if(ele==-1)
	 {
	 printf("element not found");
   }
   else
	printf("element found at %d",ele);
}
