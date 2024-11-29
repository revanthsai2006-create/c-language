#include<stdio.h>
int main()
{ 
 float W,H,BMI;
 printf("enter your weight in kg and height in meters");
 scanf("%f%f",&W,&H);
 BMI = W/H*H;
 if (BMI < 18.5)
  printf( "you are underweight");
 else if ( BMI >= 18.5 && BMI < 24.9)
  printf( "you are normal");
 else
  printf ( "you are over weight");
  } 
