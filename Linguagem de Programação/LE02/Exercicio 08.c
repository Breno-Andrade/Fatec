#include <stdio.h>
#include <math.h>

int main(void){ 
    double a = 0, b = 0, c = 0, delta = 0, x1 = 0, x2 = 0;

    //Solicita tres valores e, caso tenha, exibe as raízes reais.
    printf("Insira o valor de A: ");
    scanf("%lf", &a);
    printf("Insira o valor de B: ");
    scanf("%lf", &b);
    printf("Insira o valor de C: ");
    scanf("%lf", &c);

    if (a == 0) {
        printf ("O valor de A deve ser diferente de 0");
    } 
    else {
        delta = b * b - 4 * a * c; 
        if (delta < 0){
            printf("Nao existe raiz real");
        }
        else if (delta == 0) {
            x1 = (-b + sqrt(delta)) / (2 * a);
            printf("Existe uma raiz real, X1: %.3lf", x1);
        } 
        else {
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            printf("Existem duas raizes reais\nX1: %.3lf \nX2: %.3lf", x1, x2);
        }
	}
    return 0;
}
