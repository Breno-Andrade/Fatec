//Recebe valor em decimal e exibe em ASCII.
#include <stdio.h>

int main(void) {
    int n = 0;

    printf("Insira o decimal: ");
    scanf("%d", &n);                    // Entrada de dados.

    printf("ASCII: %s", &n);            // Saida de dados.

    return 0;
}