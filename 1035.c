#include <stdio.h>
 
int main() {
 
    int a;
	scanf("%i", &a);

	int b;
	scanf("%i", &b);

	int c;
	scanf("%i", &c);

	int d;
	scanf("%i", &d);
	
	if ((b>c) && (d>a) && ((c + d) > (a + b)) && (c>0 && d>0) && (a%2==0)) {
		printf("Valores aceitos\n");
	}

	else {
		printf("Valores nao aceitos\n");
	}
 
    return 0;
}
