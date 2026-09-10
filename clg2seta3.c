#include<stdio.h>
void main()
{
	int a[40],n,i,j,min,temp;
	printf("enter limit:");
	scanf("%d",&n);
	printf("ente elements");
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0; i<n-1; i++)
	{
		min=i;
		for(j=i; j<n; j++)
		{
		
		if(a[j]<a[min])
		{
		min=j;
        }
       }
       temp=a[i];
       a[i]=a[min];
       a[min]=temp;
	}
	printf("sorted array=");
	for(i=0; i<n; i++)
	{
		printf("%d ",a[i]);
	}
	
}
