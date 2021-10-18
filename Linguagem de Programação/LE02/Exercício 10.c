#include <stdio.h>

int main(void){
    float x, y;
    char o;

    printf("Digite a expressao: ");
    scanf("%f %c %f", &x, &o, &y);

    switch (o){
        case '+': printf("Valor = %.2f\n", x + y); break;
        case '-': printf("Valor = %.2f\n", x - y); break;
        case '*': printf("Valor = %.2f\n", x * y); break;
        case '/': if (y == 0){
            printf("O divisor deve ser maior que 0!"); break;
        } else {
            printf("Valor = %.2f\n", x / y); break;
        }
        default: printf("Operador invalido: %c\n", o);
    }
    return 0;
}