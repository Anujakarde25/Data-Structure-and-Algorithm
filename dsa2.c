#include<stdio.h>
#include<stdlib.h>
struct emp
{
	int eno;
	char ename[30];
	float sal;
};
struct emp *e1;
void accept()
{
	printf("enter eno:");
	scanf("%d",&e1->eno);
	printf("enter ename:");
	scanf("%s",e1->ename);
	printf("enter salary:");
	scanf("%f",&e1->sal);
}
void disp()
{
	printf("employee number=%d",e1->eno);
	printf("\nemployee name=%s",e1->ename);
	printf("\nemployee salary=%f",e1->sal);
}
void main()
{
	e1=(struct emp *)malloc(sizeof(struct emp));
	accept();
	disp();
}
