#include <stdio.h>

int main()
 {
float F,C;
printf("entrer la temperature en F:\n");
scanf("%f",&F);

C=(F-32)/1.8;

if ( C<0)
{
printf("la sensation ressentie : %0.2f est tres froid",c);
}
else if (C>0 && C=<17)
{
printf("la sensation ressentie : %.2f est froid",c);
}
else if (C<=27)
{
printf("la sensation ressentie : %.2f est chaud",c);
}
else  
{
printf("la sensation ressentie: %.2f est tres chaud",c);
}

return 0;
}
