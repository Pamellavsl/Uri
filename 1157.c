#include <stdio.h>

int main ()
{
	int n,i;
	scanf ("%i", &n);
	
	for (i = 1; i<=n; i = i + 1) {
		
		if (n%i == 0) {
			printf("%i\n", i);
		}
	}





	return 0;
}
