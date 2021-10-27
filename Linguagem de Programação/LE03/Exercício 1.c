#include <stdio.h>

int main(void){
    int n = 0;
    
    printf("Insira o valor de N: ");
    scanf("%d", &n);

    printf("Ordem decrescente do valor: %d\n", n);

    for(n ; n >= 0;  --n){
        printf("%d ", n);
    }
    return 0;
}