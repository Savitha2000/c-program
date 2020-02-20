#include <stdio.h>
void main()
{
    
float gb;
int day;
int sms;
printf("enter your data");
scanf("%f",&gb);
printf("enter your day");
scanf("%d",&day);
printf("enter your sms");
scanf("%d",&sms);
if(day<=84)
{
float b=1.50-gb;
printf("\n The daily data %f",b);
int a=84-day;
printf("\n you are having a day of recharge %d",a);
int c=100-sms;
printf("\n you are having a sms %d",c);
}
else
{
printf("your plan has been expired");
}
}
