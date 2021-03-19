#include <stdio.h>
 
int main() {
    
    char nome[100];
    scanf ("%s", nome);


    double salario;
    scanf ("%lf", &salario);

    double vendas;
    scanf ("%lf", &vendas);

    double salariototal;
    salariototal = (0.15*vendas) + salario;
    printf("TOTAL = R$ %.2lf\n" , salariototal);


    
 
    return 0;
}
