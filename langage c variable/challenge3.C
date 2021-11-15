#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
float Metre=1,Mile=1,Km=1;
printf("entrer la distance Metre:");
scanf("%f",&Metre);
Km=Metre*1000;
Mile=Km*1.609;
printf("%.3f",Mile);
	return 0;
}
