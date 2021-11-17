#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    int a,b;
	printf ("etrer la valeur de a : ");
	scanf ("%d",&a);
	printf ("etrer la valeur de b : ");
	scanf ("%d",&b);
	printf ("a+b=%d\n",a+b);
	printf ("a-b=%d\n",a-b);
	printf ("a*b=%d\n",a*b);
	printf ("a/b=%g\n",(float)a/b);
	printf ("a%b=%d\n",a%b);

	return 0;
}
