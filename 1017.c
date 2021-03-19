#include <stdio.h>
 
int main(void) {
	
	int tempo, vm;
	float calculo, gasolina;
	scanf ("%i", &tempo);
	scanf ("%i", &vm);

	calculo = vm*tempo;
	
	gasolina = calculo/12;

	printf("%.3f\n", gasolina);
	
 
    return 0;
}
