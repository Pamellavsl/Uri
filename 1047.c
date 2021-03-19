#include <stdio.h>

int main ()
{
	int hi, mi, hf, mf, ht, mt;
	scanf("%i%i%i%i", &hi, &mi, &hf, &mf);

	if (hf > hi && mf> mi) {

		ht = hf - hi;
		mt = mf - mi;

		printf("O JOGO DUROU %i HORA(S) E %i MINUTO(S)\n", ht, mt);
	}

	else if (hf>hi && mf<mi) {

		ht = (hf - hi) - 1;
		mt = 60 - (mi - mf);	
		printf("O JOGO DUROU %i HORA(S) E %i MINUTO(S)\n", ht, mt);
	}

	else if (hf>hi && mf == mi) {
		ht = hf - hi;
		mt = mf - mi;
		printf("O JOGO DUROU %i HORA(S) E %i MINUTO(S)\n", ht, mt);
	}

	else if (hf < hi && mf>mi) {
		ht = 24 - (hi - hf);
		mt = mf - mi;
		printf("O JOGO DUROU %i HORA(S) E %i MINUTO(S)\n", ht, mt);
	}

	else if (hf < hi && mf<mi) {
		ht = 23 - (hi - hf);
		mt = 60 - (mi - mf);
		printf("O JOGO DUROU %i HORA(S) E %i MINUTO(S)\n", ht, mt);
	}

	else if (hf < hi && mf == mi) {
		ht = 24 - (hi - hf);
		mt = mf - mi;
		printf("O JOGO DUROU %i HORA(S) E %i MINUTO(S)\n", ht, mt);
	}

	else if (hf == hi && mf == mi) {
		printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
	}
		
	else if (hf == hi && mf>mi) {
		ht = hf - hi;
		mt = mf - mi;
		printf("O JOGO DUROU %i HORA(S) E %i MINUTO(S)\n", ht, mt);
	}

	else if (hf == hi && mf<mi) {
		ht = 23 - (hf - hi);
		mt = 60 - (mi - mf);
		printf("O JOGO DUROU %i HORA(S) E %i MINUTO(S)\n", ht, mt);
	}



	return 0;
}
