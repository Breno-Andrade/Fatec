#include <stdio.h>

int main(void){
    float x = 0, res = 0;
    int n = 0;

    printf("Digite o numero e em seguida sua pontencia: ");
    scanf("%f %d", &x, &n);

    for(int i = 0; i < n; i++){
        res = x * (x * i); 
    }

    printf("Resultado da potencia de %.2f por %d: %.2f", x, n, res);

    return 0;
}