#include <stdio.h>
#include <math.h>
int main()
{
 float circonference,rayon;
 const float pi=3.14;
 printf("entrer la valeur de rayon:");
 scanf("%f",&rayon);
 circonference=2*pi*rayon;
 printf("la circonfernce =%.2f",circonference);
 return 0;
 }
