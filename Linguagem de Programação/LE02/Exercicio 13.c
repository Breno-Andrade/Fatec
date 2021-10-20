#include  <stdio.h>

int main(void){
    int placa = 0, final = 0;

    printf("Digite os numeros de sua placa: ");
    scanf("%d", &placa);

    final = placa % 10;

    printf("Voce devera rodar: ");
    if (final == 1 || final == 2){
        printf("Segunda-Feira");
    } else if (final == 3 || final == 4){
        printf("Terça-Feira");
    } else if (final == 5 || final == 6){
        printf("Quarta-Feira");
    } else if (final == 7 || final == 8){
        printf("Quinta-Feira");
    } else if (final ==  9|| final == 0){
        printf("Sexta-Feira");
    } 

    return 0;
}