#include<stdio.h>
void main()
{
	int a[50],n,i,step,temp,key,flag=0,l,r,mid;
	printf("enter limit:");
	scanf("%d",&n);
	printf("enter elements:");
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	for(step=1; step<n; step++)
	{
		for(i=0; i<n-1; i++)
		{
			if(a[i]>a[i+1])
			{
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
			}
		}
	}
	printf("sorted array=");
	for(i=0; i<n; i++)
	{
		printf("%d ",a[i]);
	}
	printf("\nenter key to search:");
	scanf("%d",&key);
	for(i=0; i<n; i++)
	{
		l=a[0];
		r=n-1;
		while(r!=l)
		{
			mid=(5l+r)/2;
			if(a[mid]==key)
			{
				flag=1;
				break;
			}
			if(a[mid]>key)
			{
				r=mid-1;
			}
			else
			{
				l=mid+1;
			}
		}
	}
	if(flag==1)
	printf("\nkey element found");
	else
	printf("\nkey element not found");
}
