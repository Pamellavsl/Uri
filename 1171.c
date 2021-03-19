#include <stdio.h>
#define N 2001

int main ()
{
    int n, i, num, j, x;
    scanf("%i", &n);

    int freqs[N] = {0};


    for (j = 0; j<n; j = j +1) {
        scanf("%i", &num);
        freqs[num] ++;
    }

    for(i = 0; i<N; i = i + 1) {
        for(j = 0; j<freqs[i]; j = j +1){
            if (freqs[i]>0){
                printf("%i aparece %i vez(es)\n", i, freqs[i]);
                break;
            }
        }


    }







    return 0;
}
