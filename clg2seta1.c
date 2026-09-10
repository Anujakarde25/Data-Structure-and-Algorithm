#include<stdio.h>
void main()
{
	int a[30],n,i,j,temp;
	printf("enter limit:");
	scanf("%d",&n);
	printf("enter elements:");
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(j=1; j<n; j++)
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
	printf("sorted array\n");
	for(i=0; i<n; i++)
	{
		printf("%d ",a[i]);
	}
}
