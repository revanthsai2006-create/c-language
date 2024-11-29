#include<stdio.h>
int a,b,c;
void lar();
int main()
{ 
  printf("Enter your numbers");
  scanf("%d%d%d",&a,&b,&c);
  lar();
 }
void lar()
{
  if( a > b && a > c)
   {
     printf("largest num is :%d",a);
     }
  else if( b > c )
   {
     printf("largest num is :%d",b);
     }
  else
  {
    printf("largest num is :%d",c);
    }
    }
   

