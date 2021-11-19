#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int i,c,number;
	c=0;
	printf("entrer la valeur de number:");
	scanf("%d",&number);
	for(i=1;i<=number;i++)
	{
	if(number%i==0)
	{
		c++;
	
    }
    
    }
    if(c==2)
    { 
	printf("ce nombre %d est premier",number);
	} 
    else 
    {
   	printf("ce nombre %d est n'est pas premier",number);
	}
	return 0;
}
