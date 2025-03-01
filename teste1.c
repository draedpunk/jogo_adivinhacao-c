#include <stdio.h>

int main (){
	int x, y, mult;
	
	printf("Informe dois numeros\n");
	scanf("%d %d", &x, &y);

    mult = x * y;
	
	printf("A multiplicacao entre %d e %d eh igual a %d\n", x, y, mult);
	
	return 0;

}