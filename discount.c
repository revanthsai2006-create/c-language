#include<stdio.h>
void main()
{
  int a;
  printf("enter your bill");
  scanf("%d",&a);
  if ( a>0 && a<=1000)
    printf(" your discount is 5 percentage");
  else if( a>1000 && a<=5000)
    printf(" your discount is 10 percentage");
    else if( a>5000 && a<=10000)
    printf(" your discount is 20 percentage");
  else 
    printf("your maximum discount is 20 percentage");
  }    
    
  
  
