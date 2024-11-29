#include<stdio.h>
int main()
{
 float p1,p2,p3,p4,p5;
 float totalprice;
 printf("enter the price of 5 items");
 scanf("%f%f%f%f%f",&p1,&p2,&p3,&p4,&p5);
 totalprice = p1+p2+p3+p4+p5;
 printf("price of item 1 is%f\n",p1);
 printf("price of item 2 is%f\n",p2);
 printf("price of item 3 is%f\n",p3);
 printf("price of item 4 is%f\n",p4);
 printf("price of item 5 is%f\n",p5);
 printf("total price of items is %f\n",totalprice);
 }
