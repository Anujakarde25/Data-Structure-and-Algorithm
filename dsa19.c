#include<stdio.h>
#define MAX 50
struct stack
{
	char a[MAX];
	int top;
}s1;
void init()
{
	s1.top=-1;
}
int isempty()
{
	if(s1.top==-1)
	  return 1;
	else
	  return 0;
}
int isfull()
{
	if(s1.top==MAX-1)
    	return 1;
    else
        return 0;
}
void push(char ch)
{
	if(isfull())
	{
	
	    printf("stack is full");
	}
	else
	{
		s1.top++;
		s1.a[s1.top]=ch;
	}
}
char pop()
{
	char val;
	if(isempty())
	   printf("stack is empty");
	else
	{
		val=s1.a[s1.top];
		s1.top--;
	}
	return val;
}
void main()
{
	char s2[50],s3[50];
	int i;
	
	printf("enter string:");
	scanf(" %s",s2);
	strcpy(s3,s2);
	for(i=0; s2[i]!='\0'; i++)
	{
		push(s2[i]);
	}
	for(i=0; s2[i]!='\0'; i++)
	{
		s2[i]=pop();
	}
	
	if(strcmp(s2,s3)==0)
	{
		printf("string is palindrom:");
	}
	else
	{
		printf("string is not palindrom");
	}
}
