#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;

    printf("entrer la valeur de a: ");
    scanf("%d",&a);
    
    if(a<0)
    {
        printf(" le nombre est négatif ");
    }

    else if(a>0)
    {
    printf(" le nombre est positif ");
    }

    else 
    {
    printf(" le nombre est egal zero ");
    }

    return 0;
}