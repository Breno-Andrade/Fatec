// Exibe a media do aluno com base em duas notas.
#include <stdio.h>

int main(void) {
    float n1 = 0, n2 = 0, m = 0;

    printf("Insira a primeira nota: ");
    scanf("%f", &n1);
    printf("Insira a segunda nota: ");      // Entrada de dados.
    scanf("%f", &n2);

    m = (n1 + n2) / 2;                      // processamento de dados.

    printf("Media final: %.2f", m);         // Saida de dados.
    return 0;
}