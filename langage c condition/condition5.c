#include <stdio.h>
#include <stdlib.h>

int main()
{
float a,b,c,d,x1,x2,x,delta;

    printf("entrer la valeur de a:\n b:\n c:\n ");
    scanf("%d%d%d",&a,&b,&c);

    delta=pow(b,2)-4*a*c;
    printf("resultat=%f\n",delta);

    if (delta<0)
   {
         printf("pas de solution");
    }

    else if (delta>0)
    {
        x1=(-b-sqrt(delta)/2*a);
        x1=(-b+sqrt(delta)/2*a);

        printf("la solution est x1=%d",x1);
        printf("la solution est x2=%d",x2);
    } 

    else
    {
        x=(-b)/2*a;
        printf("la solution est x=%d",x);
    } 

return 0;
    }