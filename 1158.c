#include <stdio.h>

int main ()
{

    int n, i;
    scanf("%i", &n);

    for (i = 0; i<n; i = i + 1) {
        int x, y, soma = 0, cont;
        scanf("%i%i", &x, &y);

        if (x%2 == 0) {
            x = x + 1;
            soma = soma + x;

            for (cont = 1; cont<y; cont = cont + 1) {
                x = x + 2;
                soma = soma + x;
	}

         	printf("%i\n", soma);
         
        }

        else {
            soma = soma + x;

            for (cont = 1; cont<y; cont = cont + 1) {
                x = x + 2;
                soma = soma + x;
            }

		 printf("%i\n", soma);


        }
    }





    return 0;
}
