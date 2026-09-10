#include<stdio.h>
void main()
{
	int n,i,j;
	char s1[20][20],temp[20];
	printf("enter limit:");
	scanf("%d",&n);
	printf("enter names:");
	for(i=0; i<n; i++)
	{
		scanf("%s",s1[i]);
	}
	for(j=1; j<n; j++)
	{
		for(i=0; i<n-1; i++)
		{
			if(strcmp(s1[i],s1[i+1])>0)
			{
			strcpy(temp,s1[i]);
			strcpy(s1[i],s1[i+1]);
			strcpy(s1[i+1],temp);	
			}
		}
	}
	printf("sorted names=");
	for(i=0; i<n; i++)
	{
		printf("%s ",s1[i]);
	}
}
