// Calcula media de comsumo do combustível em uma certa distancia.
#include <stdio.h>

int main(void) {
    float km = 0, cc = 0, cm = 0;

    printf("Insira os quilometros: ");
    scanf("%f", &km);
    printf("Insira o combustivel comsumido: ");     // Entrada de dados.
    scanf("%f", &cc);

    cm = km / cc;                                   // Processamento de Dados.

    printf("Comsumo medio: %.3f", cm);              // Saida de Dados.
    return 0;
}