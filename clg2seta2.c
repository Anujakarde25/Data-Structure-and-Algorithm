#include<stdio.h>
void main()
{
	int a[30],n,i,temp,j;
	printf("enter limit:");
	scanf("%d",&n);
	printf("enter elements:");
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1; i<n; i++)
	{
		temp=a[i];
		j=i-1;
	 while(j>=0 && a[j]>temp)
	 {
	 	a[j+1]=a[j];
	 	j=j-1;
	 }
	 a[j+1]=temp;
	}
	printf("sorted array:");
	for(i=0; i<n; i++)
	{
		printf("%d ",a[i]);
	}
}
