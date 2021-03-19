#include <stdio.h>
#include <string.h>

int main () {
    int  i, k, j;
    float c;
    scanf("%f", &c);
    j = c;
    float soma = 0, media = 0;
    float m[12][12];

    char t;
    scanf("%s", &t);


    for (i = 0; i < 12; i = i + 1) {
        for (k = 0; k < 12; k = k + 1) {
            scanf("%f", &m[i][k]);

        }
    }

    for (i = 0; i < 12; i = i + 1) {
        soma = soma + m[i][j];
        media = soma/12;


    }


    if (t == 'S') {
        printf("%.1f\n", soma);

    } else if (t == 'M') {
        printf("%.1f\n", media);
    }


    return 0;
}



