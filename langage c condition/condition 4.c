#include <stdio.h>
#include <stdlib.h>

int main()
{
int a,b,somme,resultat;

 printf("entrer la valeur de a:\n b:\n ");
    scanf("%d %d", &a,&b);

    somme=a+b;

    if (a==b)
    
    {
        resultat = somme*3;

    printf("le resultat est: %d",resultat);
    }
    else
    {
        printf("la somme est: %d",somme);
    }
return 0;
    }
