#include<stdio.h>
int a,b;
void add();
int main(int a,int b)
{
  printf("Enter two numbers");
  scanf("%d%d",&a,&b);
  add(a,b);
  
  }
void add(int a,int b)
{ 
   int s;
     s = a+b;
     printf("%d",s);
     }
  
