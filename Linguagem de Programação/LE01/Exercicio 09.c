// Converte Fahrenheit(°F) em Celsius (°C).
#include <stdio.h>

int main(void) {
    float f = 0, c = 0;

    printf("Insira os graus Fahrenheit: ");
    scanf("%f", &f);                            // Entrada de dados.

    c = (f - 32) * 5/ 9;                        // Processamento de dados

    printf("\nCelsius: %.2f", c);               // Saida de dados.
    return 0;
}