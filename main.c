#include<stdio.h>
#include<conio.h>
main()
{
 int mul[10][10];
 printf("\n Multiplication table:\n");
 for(int i=0;i<10;i++)
 {
   for(int j=0;j<10;j++)
   {
     mul[i][j]=(i+1)*(j+1);
   }
 }
  for(int i=0;i<10;i++)
  {
   for(int j=0;j<10;j++)
   {
     printf("%4d",mul[i][j]);
   }
   printf("\n");
 }

}
