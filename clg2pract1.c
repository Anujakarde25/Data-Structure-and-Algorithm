#include<stdio.h>
void main()
{
	int a[]={56,23,11,67,12,89,2};
	int n,i,j,temp;
	n=7;
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
