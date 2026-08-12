#include<stdio.h>
#include<conio.h>
void main()
{
	int a[50],n,i,num,num2;
	clrscr();
	printf("enter limit:");
	scanf("%d",&n);
	printf("enter array elements:");
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter number to search :");
	scanf("%d",&num);
	printf("enter number to replace:");
	scanf("%d",&num2);
	for(i=0; i<n; i++)
	{
		if(a[i]==num)
		{
			a[i]=num2;
		}
	}
	for(i=0; i<n; i++)
	{
		printf("%d",a[i]);
	}
	getch();
}
