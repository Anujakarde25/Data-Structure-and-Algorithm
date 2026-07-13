#include<stdio.h>
struct student
{
	int rno;
	char sname[20];
	float per;
}s1[10];
    int n;

void accept()
{
	int i;
	for(i=0; i<n; i++)
	{
	printf("enter rno:");
	scanf("%d",&s1[i].rno);
	printf("enter sname:");
	scanf("%s",s1[i].sname);
	printf("enter per:");
	scanf("%f",&s1[i].per);
   }
}
void maximum()
{
	int max,i;
	max=s1[0].per;
	for(i=0; i<n; i++)
	{
		if(s1[i].per>max)
		{
			max=s1[i].per;
		}
	}
	printf("maximum per=%d",max);
	
}
void main()
{
	printf("enter limit:");
	scanf("%d",&n);
	
	accept();
	maximum();
	
}
