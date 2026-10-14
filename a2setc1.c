#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define max_employee 100
#define max_name_len 50

typedef struct
{
	int empno;
	char empname[max_name_len];
}employee;
 
 void bubblesort(employee emp[], int n)
 {
 	int i,j;
 	employee temp;
 	for(i=0; i<n-1; i++)
 	{
 	  for(j=0; j<n-1; j++)
	   {
	   	temp=emp[j];
	   	emp[j]=emp[j+1];
	   	emp[j+1]=temp;
	   }	
	}
 }
 int main()
 {
 	FILE *fp;
 	employee emp[max_employee];
 	int cnt=0,i;
 	
 	fp=fopen("employee.txt","r");
 	if(fp==NULL)
 	{
 	  printf("file not found");
	   return 1;	
	}
	while(fscanf(fp,"%d%s",&emp[cnt].empno,emp[cnt].empname)==2)
	{
		cnt++;
		if(cnt>=max_employee)
		break;
	}
     fclose(fp);
     if(cnt==0)
     {
     	printf("No data found");
	 }
 }
