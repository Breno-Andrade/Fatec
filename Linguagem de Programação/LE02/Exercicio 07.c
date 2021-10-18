#include <stdio.h>

int main(void){
    int faltas = 0;
    float media = 0;

    printf("Insira a media: ");
    scanf("%f", &media);
    printf("Insira as faltas: ");
    scanf("%d", &faltas);

    if (faltas > 5 || media <= 4 ){
        printf("\033[31mReprovado!\033[m");
    }
    else if (media >= 6){
        printf("\033[32mAprovado!\033[m");
    }
    else{
        printf("\033[36mRecuperacao!\033[m");
    }
    return 0;
}