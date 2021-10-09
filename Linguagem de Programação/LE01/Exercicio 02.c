// Calcula o perimetro do raio inserido.
#include <stdio.h> // Entrada e saida de dados padrão

int main (void) {
    float raio = 0, perim = 0;

    printf("Digite o raio da circuferencia: ");
    scanf("%f", &raio);

    perim = 2 * 3.14 * raio;                    //Calculo do perímetro 

    printf("Perimetro: %f", perim);
    return 0;
}