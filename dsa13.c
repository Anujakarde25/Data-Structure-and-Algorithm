#include<stdio.h>
struct emp
{
	int eno;
	char ename[20];
	float sal;
}s1[10];
struct emp s2;
void main()
{
	int i,n,j;
	printf("enter limit:");
	scanf("%d",&n);
	
	for(i=0; i<n; i++)
	{
		printf("enter eployee number:");
		scanf("%d",&s1[i].eno);
		printf("enter eployee Name:");
		scanf("%s",s1[i].ename);
		printf("enter eployee salary:");
		scanf("%f",&s1[i].sal);
	}
	for(i=1; i<n; i++)
	{
		for(j=0; j<n-1; j++)
		{
			if(s1[j].eno>s1[i].eno)
			{
			
			s2=s1[i];
			s1[i]=s1[j];
			s1[j]=s2;
		    }
		}
	}
	printf("sorted employee information=");
	for(i=0; i<n; i++)
	{
		printf("\nEno=%d",s1[i].eno);
		printf("\nEname=%s",s1[i].ename);
	    printf("\nsalary=%f",s1[i].sal);
	}
}
