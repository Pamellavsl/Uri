#include <stdio.h>
 
int main() {
 
    int valor;
	scanf ("%i", &valor);
	
	int horas;
	int minutos;
	int segundos;
	int restohoras;
	horas = valor/3600;
	restohoras = valor - (horas*3600);
	minutos = restohoras/60;
	segundos = restohoras - (minutos*60);
 
	

	printf ("%i:%i:%i\n", horas, minutos, segundos);
    return 0;
}
