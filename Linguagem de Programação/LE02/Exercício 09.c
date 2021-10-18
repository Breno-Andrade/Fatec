#include <stdio.h>

int main(void){
   float s = 0, vd = 0;

   printf("Insira o salario: ");
   scanf("%f", &s);

    if (s <= 1903.98) {
        printf("Isento");
    } else if (s <= 2826.65){
        vd =  (s * 7.5) / 100;
        printf("Valor do Imposto: %.2f", vd);
    } else if (s <= 3751.05){
        vd = (s * 15) / 100;
        printf("Valor do Imposto: %.2f", vd);
    } else if (s <= 4664.68){
        vd = (s * 22.5) / 100;
        printf("Valor do Imposto: %.2f", vd); 
    } else {
        vd = (s * 27.5) / 100;
        printf("Valor do Imposto: %.2f", vd);
    }
    return 0;
}
