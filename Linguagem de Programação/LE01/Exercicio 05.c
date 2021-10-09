//Exibe codigo ASCII, do caracter inserido, em octal, decimal e hexadecimal.
#include <stdio.h>

int main(void) {
    char c;

    printf("Insira o caractere: "); 
    scanf("%c", &c);                            // Entrada de dados.

    printf("\nASCII em octal: %o\n", c);
    printf("ASCII em decimal: %d\n", c);        // Saida de dados.
    printf("ASCII em hexadecimal: %x\n\n", c);
    return 0;
} 