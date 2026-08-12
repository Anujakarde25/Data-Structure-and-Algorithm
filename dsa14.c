#include<stdio.h>
struct emp
{
	int eno; 
	char ename[20]; 
	float sal; 
}e1[10];
struct emp temp;
 
void bubble_sort(int n) 
{
	int pass,i;
	for(pass=1; pass<n; pass++)
	{
		for(i=0; i<n-1; i++)
		{
			if(e1[i].eno>e1[i+1].eno)
			{
				temp = e1[i];
				e1[i] = e1[i+1];
				e1[i+1] = temp;
			}
		}
	}
}


void main()
{
	int i,n;
	printf("enter limit:");
	scanf("%d",&n);
	
	for(i=0; i<n; i++)
	{
		printf("enter eno:");
		scanf("%d",&e1[i].eno);
		printf("enter ename:");
		scanf("%s",e1[i].ename);
		printf("enter salary:");
		scanf("%f",&e1[i].sal);
	}
	
	bubble_sort(n);
	
	for(i=0; i<n; i++)
	{
		printf("\n%d",e1[i].eno);
		printf("\n%s",e1[i].ename);
		printf("\n%f",e1[i].sal);
	}

}
