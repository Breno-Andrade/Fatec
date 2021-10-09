// Determina se uma pessoa esta obesa.
#include <stdio.h>  // Entrada e Saida padrão.
#include <math.h>   // Funções matemáticas.

int main (void) {
    float peso = 0, altura = 0, imc = 0;

    printf("Digite seu peso: ");
    scanf("%f", &peso);
    printf("Digite sua altura: ");
    scanf("%f", &altura);

    imc = peso / pow(altura, 2);

    if (imc <= 30) {
        printf("Nao esta obeso.\n");
    }
    else {
        printf("Esta obeso.\n");
    }
    return 0;
}