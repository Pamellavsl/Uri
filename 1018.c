#include <stdio.h>
 
int main() {
    	
	   int valor;
    scanf ("%i", &valor);
  

    int cedula100;
    int cedula50;
    int cedula20;
    int cedula10;
    int cedula5;
    int cedula2;
    int cedula1;

    cedula100 = (valor/100);
    cedula50 = (valor - cedula100*100)/50;
    cedula20 = ((valor - cedula100*100) - cedula50*50)/20;
    cedula10 = ((valor - cedula100*100) - cedula50*50  - cedula20*20)/10;
    cedula5 = ((valor - cedula100*100) - cedula50*50 - cedula20*20)/5;
    cedula2 = ((valor - cedula100*100) - cedula50*50 - cedula20*20 - cedula5*5)/2;
    cedula1 = ((valor - cedula100*100) - cedula50*50 - cedula20*20 - cedula5*5 - cedula2*2)/1;

    printf("%i\n", valor);
    printf("%i nota(s) de R$ 100,00\n", cedula100);
    printf("%i nota(s) de R$ 50,00\n", cedula50);
    printf("%i nota(s) de R$ 20,00\n", cedula20);
    printf("%i nota(s) de R$ 10,00\n", cedula10);
    printf("%i nota(s) de R$ 5,00\n", cedula5);
    printf("%i nota(s) de R$ 2,00\n", cedula2);
    printf("%i nota(s) de R$ 1,00\n", cedula1);
 
    return 0;
}
