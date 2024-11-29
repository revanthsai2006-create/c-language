#include<stdio.h>
int a;
void ab();
int main()
{
  printf("Enter your number");
  scanf("%d",&a);
   ab();
  }
void ab()
{
   if( a > 0 )
    {
      printf( "absolute value of number is : %d",a);
      }
   else
    {  int s;
      s = -1*a;
      printf( "absolute value of number is : %d",s);
      }
      
      }
      
