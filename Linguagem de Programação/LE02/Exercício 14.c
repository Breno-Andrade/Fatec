#include  <stdio.h>

int main(void){
    int placa = 0, final = 0;

    printf("Digite os numeros de sua placa: ");
    scanf("%d", &placa);

    final = placa % 10;

    printf("Voce devera rodar: ");
    switch (final){
    case 1: printf("Segunda-Feira"); break;
    case 2: printf("Segunda-Feira"); break;
    case 3: printf("Terca-Feira"); break;
    case 4: printf("Terca-Feira"); break;
    case 5: printf("Quarta-Feira"); break;
    case 6: printf("Quarta-Feira"); break;
    case 7: printf("Quinta-Feira"); break;
    case 8: printf("Quinta-Feira"); break;
    case 9: printf("Sexta-Feira"); break;
    case 0: printf("Sexta-Feira"); break;
    default: printf("Dia desconhecido!");
    }

    return 0;
}