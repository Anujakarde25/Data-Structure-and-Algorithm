#include<stdio.h>
#include<string.h>
struct emp
{
	int eno;
	char ename[20];
	float sal;
}e1[15];
struct emp temp;
void main()
{
	int n,i,step;
	printf("enter limit:");
	scanf("%d",&n);
	for(i=0; i<n; i++)
	{
		printf("enter employee number:");
		scanf("%d",&e1[i].eno);
		printf("enter employee Name:");
		scanf("%s",e1[i].ename);
		printf("enter employee Salary:");
		scanf("%f",&e1[i].sal);
	}
	
	for(step=1; step<n; step++)
	{
		for(i=0; i<n-1; i++)
		{
			if(strcmp(e1[i].ename,e1[i+1].ename)<0)
			{
				temp=e1[i];
				e1[i]=e1[i+1];
				e1[i+1]=temp;
			}
		}
	}
	printf("employee info in descending order=\n");
	for(i=0; i<n; i++)
	{
		printf("\nEmployee Number=%d",e1[i].eno);
		printf("\nEmployee Name=%s",e1[i].ename);
		printf("\nEmployee Salary=%f",e1[i].sal);
	}
}
