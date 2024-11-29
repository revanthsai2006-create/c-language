#include<stdio.h>
int main()
{
 int a,choice;
 printf("enter your year");
 scanf("%d",&a);
 printf("1:year ending with 00,2:year not ending with 00");
 printf("enter your choice");
 scanf("%d",&choice);
 switch(choice)
  {  case 1:
     if (a%400 == 0)
      printf("%d is a leap year",a);
     else
        printf("%d is not a leap year",a);
         break;
     
   case 2:
      if (a%4 == 0 )
       printf("%d is a leap year",a);
     else
        printf("%d is not a leap year",a);
        break;
     }
   }     
      
     
      
         

