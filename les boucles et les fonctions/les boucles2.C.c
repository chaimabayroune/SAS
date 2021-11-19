#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int l,e,x,o;
	
	printf("entrer la valeur de l:");
	
	scanf("%d",&l);
	
	for(e=1;e<=l;e++)
	{
	for(x=1;x<=l-e;x++)
	
		printf(" ");
	for(o=1;o<=e*2-1;o++)
	{
		printf("*");
	}
	printf("\n");
}
return 0;	
	}
