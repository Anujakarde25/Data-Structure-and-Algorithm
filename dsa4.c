#include<stdio.h>
int occ(int n,int a[],int num)
{
	int i,cnt=0;
	for(i=0; i<n; i++)
	{
		if(a[i]==num)
		{
			cnt++;
		}
	}
	return cnt;
}
void main()
{
	int a[20],i,n,num,ans;
	printf("enter limit :");
	scanf("%d",&n);
	printf("enter elements:");
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter occurrence:");
	scanf("%d",&num);
	ans=occ(n,a,num);
	printf("occurence=%d",ans);
}


