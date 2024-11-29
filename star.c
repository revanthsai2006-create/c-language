#include<stdio.h>
int main()
{  
  int i=1,n,r;
  printf("enter value of n");
  scanf("%d",&n);
  while( i <= n )
   {  r = 1;
     while( r <= i)
     { 
        printf( "* ");
        r++;
         }
      printf("\n");
      i++;
      }
 }     
     
     
