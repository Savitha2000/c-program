#include <stdio.h>

int main()
{
int a,b;
scanf("%d",&a);
if(a>=21)
{
    b=a-21;
    printf("The remaining lemons= %d",b);
}
    else
{
    b=21-a;
    printf("the required lemons= %d",b);
}
  
}
