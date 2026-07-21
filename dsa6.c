#include<stdio.h>
void main()
{
	int a[50],n,i;
	printf("enter limit:");
	scanf("%d",&n);
	printf("enter elements:");
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	square(a,n);
}
void square(int a[],int n)
{
	int i,b[50];
	for(i=0; i<n; i++)
	{
		b[i]=a[i]*a[i];
	}
	printf(" square of array elements=");
	for(i=0; i<n; i++)
	{
		printf("  %d",b[i]);
	}
}
