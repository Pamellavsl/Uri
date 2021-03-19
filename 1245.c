#include <stdio.h>
#include <string.h>

int main ()
{
    int i, n, j, num, k;
    while (scanf ("%i", &n) != EOF) {

        int vetb[n], b, esq[61] = {0}, dir[61] = {0}, d, e, parest = 0;
        char vetl[n], l;


        for (i = 0; i < n; i++) {
            scanf("%i %c", &b, &l);
            vetb[i] = b;
            vetl[i] = l;

        }


        for (k = 0; k < n; k++) {

            l = vetl[k];
            num = vetb[k];

            if (l == 'D') {
                dir[num]++;
            } else {

                esq[num]++;

            }
        }

        for (j = 30; j < 61; j++) {
            d = dir[j];
            e = esq[j];

            if (d != 0 && e != 0) {
                if (d == e) {
                    parest = parest + d;

                } else if (d > e) {
                    parest = parest + e;
                } else if (e > d) {
                    parest = parest + d;

                }
            }


        }


        printf("%i\n", parest);


    }
        return 0;
    }
