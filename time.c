#include<stdio.h>
int main()
{ 
int time,hr,min,sec;
printf("enter the time:");
scanf("%d",&time);
hr=time/3600;
min=(time%3600)/60;
sec=time%60;
printf("hours:%d\n",hr);
printf("minutes:%d\n",min);
printf("seconds:%d\n",sec);
}

