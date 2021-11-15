#include <stdio.h>
#include <stdlib.h>

int main()
{
int x;
printf("entrer la valeur de x:\n");
scanf("%d",&x);

if(x%2==0)
	{ printf("le nombre  %d est pair",x);
	}
	else{
		printf("le nombre %d est impair",x);
	}
return 0;
}