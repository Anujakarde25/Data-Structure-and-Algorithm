#include<stdio.h>
#include<conio.h>
void main()
{
   int max,i,poly[5];
   clrscr();
   printf("enter high power of poly:");
   scanf("%d",&max);
   printf("enter coefficient:");
   for(i=max; i>=0; i--)
   {
    scanf("%d",&poly[i]);
   }
   printf("polynominal:");
   for(i=max; i>=0; i--)
   {
    if(poly[i]!=0)
    {
    printf("%d",poly[i]);
      if(i!=0)
      {
       printf("x^%d",i);
      }
      if(i>0)
      {
      printf("+");
      }
    }
   }
   getch();
}


