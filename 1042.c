#include <stdio.h>
#include <math.h>

int main ()
{
	int a, b, c;
	scanf("%i%i%i", &a, &b, &c);

	if (a>b && b>c && c<a) {
		printf ("%i\n%i\n%i\n", c, b, a);
		printf("\n");
		printf("%i\n%i\n%i\n", a, b ,c);
	}

	else if (a>b && b<c && c<a) {
		printf ("%i\n%i\n%i\n", b, c, a);
		printf("\n");
		printf("%i\n%i\n%i\n", a, b ,c);
	}
	
	else if (b>a && a>c && b>c) {
		printf("%i\n%i\n%i\n", c,a,b);
		printf("\n");
		printf("%i\n%i\n%i\n", a, b ,c);
	}
	
	else if (b>a && a<c && b>c) {
		printf("%i\n%i\n%i\n", a,c,b);
		printf("\n");
		printf("%i\n%i\n%i\n", a, b ,c);
	}
	
	else if (c>a && a>b && c>b) {
		printf("%i\n%i\n%i\n", b,a,c);
		printf("\n");
		printf("%i\n%i\n%i\n", a, b ,c);
	}

	else if (c>a && a<b && c>b) {
		printf("%i\n%i\n%i\n", a, b, c);
		printf("\n");
		printf("%i\n%i\n%i\n", a, b ,c);
	} 
	

























	return 0;
}
