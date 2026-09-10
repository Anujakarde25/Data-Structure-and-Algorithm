#include<stdio.h>
#include<string.h>
void main()
{
	char s1[20][20],key[20];
	int i,n,j;
	printf("enter limit:");
	scanf("%d",&n);
	printf("enter days names:");
	for(i=0; i<n; i++)
	{
		scanf("%s",s1[i]);
	}
    for (i=1; i<n; i++)
	 {
        strcpy(key,s1[i]);
        j=i-1;

        while(j>=0 && strcmp(s1[j],key)>0)
		 {
            strcpy(s1[j+1],s1[j]);
            j=j-1;
        }
        strcpy(s1[j+1],key);
    }
    printf("\nSorted days :\n");
    for (i = 0; i < n; i++) {
        printf("%s ",s1[i]);
    }
}
