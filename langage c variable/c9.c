#include <stdio.h>
#include <math.h>
int main()
 {
float x1,y1,x2,y2,MN;
printf("la formule de distance de x1:\n y1:\n x2:\n y2:\n");
scanf("%f %f %f %f",&x1,&y1,&x2,&y2);
MN=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
printf("ladistance entre M et N est =%f",MN);
return 0;
 }