#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
float Metre=1,Mile=1,Km=1;
printf("entrer la distance Mile:");
scanf("%f",&Mile);
Metre=Km/1000;
Km=Mile/1.609;
printf("%f",Metre);
	return 0;
}
