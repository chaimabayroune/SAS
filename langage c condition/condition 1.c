#include <stdio.h>

int main()
 {
float  Fahrenheit,Celsius ;
printf("entrer la temperature en Fahrenheit:\n");
scanf("%f",&Fahrenheit);

Celsius=(Fahrenheit-32)/1.8;

if ( C<=0)
{
printf("la sensation ressentie : %0.2f est tres froid",c);
}
else if (C>0 && C<=17)
{
printf("la sensation ressentie : %.2f est froid",c);
}
else if (C>17 && C<=27)
{
printf("la sensation ressentie : %.2f est chaud",c);
}
else if (C>27 && C<=50)
{
printf("la sensation ressentie: %.2f est tres chaud",c);
}
else
{
printf("non valider");
}

return 0;
}
