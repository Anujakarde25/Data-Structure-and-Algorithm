#include<stdio.h>
#include<conio.h>
void main()
{
	int a[50],b[50],i,n;
	clrscr();
	printf("enter limit:");
	scanf("%d",&n);
	printf("enter array elements:");
	for(i=0; i<n; i++)
	{
	  scanf("%d",&a[i]);
	}
	for(i=0; i<n; i++)
	{
		b[i]=a[i];
	}
	printf("copyed array elements=");
	for(i=0; i<n; i++)
	{
		printf(" %d",b[i]);
	}
	getch();
}
