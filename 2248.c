#include <stdio.h>

int main () {
    int n, i, indice, f = 1, j, cont = 0, contv = 0, x, contw = 1, k;

    while (f == 1) {
        scanf("%i", &n);

        if (n == 0) break;

        else {

            int maior = 0;

            int vetc[n], vetn[n], vetm[n];
            for (i = 0; i < n; i = i + 1) {
                scanf("%i%i", &vetc[i], &vetn[i]);
                if (vetn[i] > maior) {
                    maior = vetn[i];
                    indice = vetc[i];
                }
            }

            printf("Turma %i\n", contw);

        
            for (j = 0; j<n; j = j + 1) {
                if (vetn[j] == maior) {
                   	printf("%i ", vetc[j]);

                    }


                if (j == n -1) {
                	printf("\n\n");
			
                }
        }

        contw = contw + 1;
    }


}

    return 0;
}
