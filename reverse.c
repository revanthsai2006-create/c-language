#include<stdio.h>
int main()
{  
   int n,digit;
   printf("enter your number");
   scanf("%d",&n);
   while( n > 0)
   {   
       digit = n %10;
       n = n/10;
       printf("%d",digit);
    } 
  }
