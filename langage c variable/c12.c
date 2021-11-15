#include <stdio.h>
#include <math.h>
int main()
{
int a,b,c,d;
printf("entrer la valeur de d:");
scanf("%d",&d);
a=(d%100)%10;
b=(d%100)/10;
c=(d/100);
printf("inverse est =%d%d%d",a,b,c);
return 0;
}
