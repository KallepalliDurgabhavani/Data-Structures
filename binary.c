#include<stdio.h>
int binary(int *a,int n,int se)
{
	int i,mid,low=0,high=n-1;
	while(low<=high)
	{
	mid=(low+high)/2;
	if(a[mid]==se) return mid;
	else if(mid<se) low=mid+1;
	else high=mid-1;
     }
return-1;
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
	 int ele=binary(a,n,se);
	 if(ele==-1)
	 {
	 printf("element not found");
   }
   else
	printf(" element found at %d",ele);
}
