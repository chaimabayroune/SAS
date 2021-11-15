#include <stdio.h>
#include <stdlib.h>

     int main()
{
     int nmbr1,nmbr2,max;

     printf("entrer la valeur de nmbr1:\n nmbr2:\n ");
     scanf("%d %d", &nmbr1,&nmbr2);

    max=nmbr1;

    if(nmbr2>nmbr1)
    {
        printf("la maximum est:%d",nmbr2);
    }
    else
    {
        printf("la maximum est:%d",max);
    }

    return 0;
   }
