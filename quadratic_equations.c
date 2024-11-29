#include<stdio.h>
#include<math.h>
int main()
{ int a,b,c,d,i,r1,r2;
  printf( " enter the coefficients " );
  scanf( "%d%d%d",&a,&b,&c);
 d = (b*b - 4*a*c);
 if( d >= 0) 
 { 
   i = 1;
   }
 else
 { 
   i = 0;
    }
switch(i)
 { case 1 :
      r1 = (-b+sqrt(d))/2*a;
      r2 = (-b-sqrt(d))/2*a;
     printf( "roots of equation are %dand%d ",r1,r2 );
     break;
       
   case 0 :
       printf( "no real roots of equation" );  
       break;
       
   default : }
    }
        


