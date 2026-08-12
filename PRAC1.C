#include<stdio.h>
#include<conio.h>
void main()
{
 int ch,i,a[50],n,sum=0;
 clrscr();
 printf("enter limit:");
 scanf("%d",&n);
 printf("enter array elements:");
 for(i=0; i<n; i++)
 {
  scanf("%d",&a[i]);
 }
 printf("\n1: sum of odd position elements:");
 printf("\n2: sum of even position elements:");
 printf("\nenter your choice:");
 scanf("%d",&ch);
 switch (ch)
 {
  case 1:
  {
   for(i=0; i<n; i++)
   {
    if(i%2!=0)
    {
     sum=sum+a[i];
    }
   }
   printf("sum of odd position elements=%d",sum);
   break;
  }
  case 2:
 {
  for(i=0; i<n; i++)
  {
   if(i%2==0)
   {
   sum=sum+a[i];
   }
  }
  printf("sum of even position elements=%d",sum);
  break;
 }
 }
 getch();
}