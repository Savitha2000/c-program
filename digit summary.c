#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
int a,b,c,d=0,z=0,e;
    scanf("%d",&a);
e=a;
    while(z<10){
       a=e;
       while(a>0){
           b=a%10;
           a=a/10;
           if(b==z){
               d=d+1;
           }
       }
       z=z+1;
    printf("%d ",d);
    d=0;
   }
    return 0;
}
