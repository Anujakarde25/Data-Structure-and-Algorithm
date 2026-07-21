#include<stdio.h>
void evensum(int a[],int n)
{
	int i,s=0;
	for(i=0; i<n; i++)
	{
		if(i%2==0)
		{
			s=s+a[i];
		}
	}
	printf("sum of even position elements=%d",s);
}
void oddsum(int a[],int n)
{
	int i,s=0;
	for(i=0; i<n; i++)
	{
		if(i%2!=0)
		{
			s=s+a[i];
		}
	}
	printf("sum of odd position elements=%d",s);
}
void main()
{
	int a[50],n,i;
	char ch;
	
	printf("enter limit: ");
	scanf("%d",&n);
	printf("enter elements:");
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	do
	{
		printf("A: sum of even position elements:");
		printf("\nB: sum of odd position elements");
		printf("\nC: Exite");
		printf("\nenter your choice:");
		scanf(" %c",&ch);
		
	    switch (ch)
	    { 
	    case 'A':
	    	{
	    		evensum(a,n);
	    		break;
			}
		case 'B':
			{
				oddsum(a,n);
				break;
			}
		default :
			printf("invalid choice");
		}
	}while(ch!='C');
	
}
