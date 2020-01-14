#include<stdio.h>
#include<conio.h>
main()
{
 int mul[10][10],i,j;
 printf("\n Multiplication table:\n");
 for(i=0;i<10;i++)
 {
   for(j=0;j<10;j++)
   {
     mul[i][j]=(i+1)*(j+1);
   }
 }
  for(i=0;i<10;i++)
  {
   for(j=0;j<10;j++)
   {
     printf("%4d",mul[i][j]);
   }
   printf("\n");
 }

}
