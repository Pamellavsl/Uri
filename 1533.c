#include <stdio.h>

int main ()
{
    int i, n, sub, j, indice, f = 1;

    while (f == 1) {
        scanf("%i", &n);

        if ( n == 0) break;

        else {

            int vet[n];
            int menorsub = 999999, maior = 0;

            for (i = 0; i < n; i = i + 1) {


                scanf("%i", &vet[i]);

                if (vet[i] > maior) {
                    maior = vet[i];

                }


            }

            for (j = 0; j < n; j = j + 1) {
                sub = maior - vet[j];
                if (sub != 0) {
                    if (sub < menorsub) {
                        menorsub = sub;
                        indice = j + 1;
                    }
                }
            }
        }

        printf("%i\n", indice);
    }

    return 0;
}
