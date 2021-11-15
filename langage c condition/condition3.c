#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char x;
    printf("entrer la valeur de x:\n");
    scanf("%c", &x);

    x=  tolower(x);
    
    switch (x)
    {
    case 'a':
    {
        printf("le caractere est un voyelle");
        break;
    }

    case 'o':
    {
        printf("le caractere est un voyelle");
        break;
    }

    case 'e':
    {
        printf("le caractere est un voyelle");
        break;
    }

    case 'i':
    {
        printf("le caractere est un voyelle");
        break;
    }
    case 'u':
    {
        printf("le caractere est un voyelle");
        break;
    }
    case 'y':
    {
        printf("le caractere est un voyelle");
        break;
    }

    default:
    {
        printf("non ");
        break;
    }
    }

    return 0;
}
