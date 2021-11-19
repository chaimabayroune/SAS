#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int x,i,multiplication;
	
	printf("entrer la valeur de x:");
	
	scanf("%d",&x);
	
	for(i=1;i<=10;i++)
	{
		multiplication=x*i;
		
		printf("%d*%d=%d \n",x,i,multiplication);
	}
	return 0;
}
