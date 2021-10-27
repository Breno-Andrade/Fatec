#include <stdio.h>

int main(void){
    int n = 0, fat = 1;

    printf("Digite o numero para saber o fatorial: ");
    scanf("%d", &n);

    printf("O fatorial de %d eh: ", n);
    for(int x = 1; x <= n; x++){
        printf("%d ", x);
        fat *= x;
        if(x < n){
            printf("* ");
        } 
        else{
            printf("= ");
        }
    }
    printf("%d\n", fat);

    return 0;
}