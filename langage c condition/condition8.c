
#include <stdio.h>
#include <stdlib.h>
    int main()
    {
    char i;

     printf("entrer la valeur de i :");
    scanf("%c",&i);

    if(i>'a'&& i<'z')
    {
        printf("les lettres est majescules");
    }

    else if(i>'A'&& i<'Z')
    {
   printf("les lettres est menescules");
    } 

    return 0;
}