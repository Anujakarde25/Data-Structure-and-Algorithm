#include<stdio.h>
void search(int n,int a[],int key)
{
	int i,flag=0;
   for(i=0; i<n; i++)
	{
		if(a[i]==key)
		   flag=1;  
	      	goto f1;
	      	    	   
    }     
    if(flag=0)
    {
    	printf("key element is not found:");
	}
     f1:
     	printf("key element is found");
}
void main()
{
	int a[20],n,i,key;
	printf("Enter Limit :");
	scanf("%d",&n);
	printf("Enter Element :");	
	
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter Key to search :");
	scanf("%d",&key);
	search(n,a,key);
}
