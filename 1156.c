#include <stdio.h>


int main ()
{
	float s = 1.0, x= 2.0;
	int i;
	
	for (i = 3; i<=39; i = i + 2) {
		
		s = s + i/x;
		
		x = x*2;
	}

	printf("%.2f\n", s);



	return 0;
}
