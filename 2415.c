#include <stdio.h>

int main ()
{
    long n, i, novo_valor, valor_antigo = 0, maior_cont = 0, cont = 1;
    scanf("%ld", &n);

    for (i = 0; i<n; i = i + 1) {

        int v;
        scanf("%i", &v);

        novo_valor = v;

        if (novo_valor == valor_antigo) {
            cont = cont + 1;
            if (cont>maior_cont) {
                maior_cont = cont;
            }
        }

        else {
            valor_antigo = novo_valor;
            cont  = 1;
        }
    }



    printf("%ld\n", maior_cont);

    return 0;
}
