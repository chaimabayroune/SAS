#include <stdio.h>
#include <stdlib.h>

int main()
{
float a,b,c,x1,x2,x,delta;

    printf("entrer la valeur de a:\n b:\n c:\n ");
    scanf("%d%d%d",&a,&b,&c);

    delta=pow(b,2)-4*a*c;
   // printf("resultat=%f\n",delta);

    if (delta<0)
   {
         printf("pas de solution");
    }

    else if (delta>0)
    {
    	x=(-b)/2*a;
        printf("la solution de x=%d",x);
    } 

    else
    {
        x1=(-b-sqrt(delta)/2*a);
        x1=(-b+sqrt(delta)/2*a);

        printf("la solution de x1=%d \n",x1);
        printf("la solution de x2=%d",x2);
    } 

return 0;
    }
