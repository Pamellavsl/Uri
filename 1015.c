#include <stdio.h>
 
int main(void) {
 
   double x1, x2, y1, y2, dx, dy, qx, qy, distancia, raiz;
	scanf("%lf%lf\n", &x1,&y1);
	scanf("%lf%lf", &x2,&y2);
	
	dx = x2 - x1;
	dy = y2 - y1;

	qx = dx*dx;
	qy = dy*dy;

	distancia = qx + qy;
	raiz = (double)sqrt(distancia);

	printf("%.4f\n", raiz);

 
    return 0;
}
