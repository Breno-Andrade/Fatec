#include<stdio.h>

int main (void) {
    float n1 = 0, n2 = 0;
    printf("Insira o primeiro valor: ");
    scanf("%f", &n1);
    printf("Insira o segundo valor: ");
    scanf("%f", &n2);

    if(n1 > n2){
        printf("O primeiro valor eh maior!");
    }
    else if(n2 > n1){
        printf("O segundo valor eh maior!");
    }
    else{
       printf("Os valores sao iguais!"); 
    }
    return 0;
}