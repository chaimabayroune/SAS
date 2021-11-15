#include <stdio.h>
#include <math.h>
int main()
 {
int a,b,c,d,somme,moyenne;
printf("entrer la valeur de a:\n b:\n c:\n d:\n ");
scanf("%d %d %d %d",&a,&b,&c,&d);
somme=(a+b+c+d);
moyenne=(somme/4);
printf("somme =%d \n",somme);
printf("moyenne =%d",moyenne);
return 0;
 }
