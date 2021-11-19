#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int number,numberinvers,resultat;
	numberinvers=0;
	printf("entre la valeur de le numbre: ");
	scanf("%d",&number);
	while(number!=0)
	{
		resultat=number%10;
		numberinvers=10*numberinvers+resultat;
		number=number/10;
	}
	printf("l'entier inversé est :%d",numberinvers);
	return 0;
}
