#include<stdio.h>
int main()
{
 int x,y;
 printf("enter your coordinates");
 scanf("%d%d",&x,&y);
 if (x>0&&y>0)
  printf("(%d,%d) is in first quadrant",x,y);
 else if (x<0&&y>0)
  printf("(%d,%d) is in second quadrant",x,y); 
 else if (x<0&&y<0)
  printf("(%d,%d)is in third quadrant",x,y); 
 else if (x>0&&y<0)
  printf("(%d,%d) is in fourth quadrant",x,y);
 else if (x==0&& y != 0)
 printf("(%d,%d) is on y axis",x,y);
 else if (y==0&& x != 0)
 printf("(%d,%d) is on x axis",x,y); 
 else if (x==0&&y==0)
 printf("(%d,%d) is on both x and y axes",x,y);
  }
  
 
 
