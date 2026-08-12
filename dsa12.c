#include<stdio.h>
#include<string.h>
void main()
{
	char s1[][50]={"monika","shifa","gauri","nisha","rajshri"};
	int i,j;
	char s2[15];
    for(j=1; j<5; j++)
    {
    	for(i=0; i<5-1; i++)
    	{
    		if(strcmp(s1[i],s1[i+1])>0)
    		{
    			strcpy(s2,s1[i]);
    			strcpy(s1[i],s1[i+1]);
    			strcpy(s1[i+1],s2);
			}
		}
	}
	printf("sorted strings = ");
	for(i=0; i<5; i++)
	{
		printf("%s ",s1[i]);
	}
}
