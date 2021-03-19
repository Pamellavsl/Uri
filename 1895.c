#include <stdio.h>


int calculomodulo (int num1,int num2)
{
	int modulo;

	if (num1>num2) {
		modulo = num1-num2;
	}

	else {
		modulo = num2 - num1;
	}

	return modulo;

}

int main ()
{
	int n, t, l, i, s, pontA = 0, pontB = 0;
	scanf("%i%i%i", &n, &t, &l);

	for (i = 1; i<n; i = i + 1) {

		if (i%2 != 0) {

			scanf("%i", &s);

			if(calculomodulo(t,s) <= l) {
				pontA = pontA + calculomodulo(t,s);
				t = s;
			}
		}

		else {
			scanf("%i", &s);

			if(calculomodulo(t,s) <= l) {
				pontB = pontB + calculomodulo(t,s);
				t = s;
			}
		}



	}


	printf("%i", pontA);
	printf(" ");
	printf("%i\n", pontB);

	return 0;
}
