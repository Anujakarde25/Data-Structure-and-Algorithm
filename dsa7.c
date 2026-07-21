#include<stdio.h>
void main()
{
	int a[50],n,i,num,num2;
	printf("enter limit:");
	scanf("%d",&n);
	printf("enter array elements:");
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter number to search:");
	scanf("%d",&num);
	printf("enter number for replace:");
	scanf("%d",&num2);
	replace(a,n,num,num2);
	
}
void replace(int a[],int n, int num, int num2)
{
	int i,temp;
	for(i=0; i<n; i++)
	{
		if(a[i]==num)
		{
		 a[i]=num2;	
		}
	}
	printf("array after replace:");
	for(i=0; i<n; i++)
	{
		printf("  %d",a[i]);
	}
}
