// Calcula a distancia entre dois pontos no plano carteciano.
#include <stdio.h>      
#include <math.h>

int main(void) {
    float xp = 0, yp = 0, xq = 0, yq = 0, d = 0;
    
    printf("Insira a posicao Xp e Yp: ");
    scanf("%f, %f", &xp, &yp);
    printf("Insira a posicao Xq e Yq: ");
    scanf("%f, %f", &xq, &yq);

    d = sqrt(pow(xq - xp, 2) + pow(yp - yq, 2));

    printf("Distancia: %.3f", d);
    return 0;
}