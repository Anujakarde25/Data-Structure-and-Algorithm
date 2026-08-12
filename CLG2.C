#include<stdio.h>
#include<conio.h>
int main()
{
 int i,cnt=0,a[50],n,num;
 clrscr();
 printf("enter limit:");
 scanf("%d",&n);
 printf("enter array limit:");
 for(i=0; i<n; i++)
 {
  scanf("%d",&a[i]);
 }
 printf("enter number to count:");
 scanf("%d",&num);
 for(i=0; i<n; i++)
 {
   if(a[i]==num)
   {
    cnt++;
   }
 }
 printf("count of occurrence=%d",cnt);
 getch();
}
