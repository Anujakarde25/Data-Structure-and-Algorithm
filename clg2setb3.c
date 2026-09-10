#include<stdio.h>
void main()
{
	int a[40],i,n,step,temp,cnt=0;
	printf("enter limit:");
	scanf("%d",&n);
	printf("ente elements=");
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
				cnt++;
			}
		}
	}
	printf("sorted array: ");
	for(i=0; i<n; i++)
	{
		printf("%d ",a[i]);
	}
	printf("count of swap=%d",cnt);
}
