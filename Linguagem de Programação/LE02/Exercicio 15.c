#include <stdio.h>  //Entrada e Saida padrão.
#include <math.h>   //Funções matemáticas.

int main (void) {
    float peso = 0, altura = 0, imc = 0, teste = 0;

    printf("Digite seu peso: ");
    scanf("%f", &peso);
    printf("Digite sua altura: ");
    scanf("%f", &altura);

    imc = peso / pow (altura, 2);

    if (imc < 18.5) {
        printf("Esta magro.\n");
    }
    else if (imc <= 30){
        printf("Esta normal.\n");
    }
    else {
        printf("Esta obeso.\n");
    }
    return 0;
}