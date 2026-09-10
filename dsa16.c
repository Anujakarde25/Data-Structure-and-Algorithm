#include<stdio.h>
struct student
{
	int sno;
	char sname[25];
	float per;
}s1[20];
struct student temp;
void sort(int n)
{
	int step,i;
	for(step=1; step<n; step++)
	{
		for(i=0; i<n-1; i++)
		{
			if(s1[i].per>s1[i+1].per)
			{
				temp=s1[i];
				s1[i]=s1[i+1];
				s1[i+1]=temp;
			}
		}
	}
}
void main()
{
	int n,i;
	printf("enter limit:");
	scanf("%d",&n);
	for(i=0; i<n; i++)
	{
		printf("enter student no:");
		scanf("%d",&s1[i].sno);
		printf("enter student name:");
		scanf(" %s",&s1[i].sname);
		printf("enter student per:");
		scanf("%f",&s1[i].per);
		
	}
	sort(n);
	for(i=0; i<n; i++)
	{
		printf("\nStudent Number=%d",s1[i].sno);
		printf("\nStudent Name=%s",s1[i].sname);
		printf("\nStudent Percentage=%f",s1[i].per);
	}
}
