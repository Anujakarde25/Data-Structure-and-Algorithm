#include<stdio.h>
void sort(int a[],int n)
{
	int i,j,temp;
	for(i=1; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
}
void main()
{
	int i,a[50],n;
	printf("enter limit:");
	scanf("%d",&n);
	printf("enter elements:");
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	sort(a,n);
	printf("\n sorted array=");
	for(i=0; i<n; i++)
	{
		printf("%d ",a[i]);
	}
}
