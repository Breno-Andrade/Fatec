#include <stdio.h>

int main(void){
    int n = 0, s = 0, r = 0, aux = 0;

    // Entrada de Dados.
    printf("Digite o numero da conta: ");
    scanf("%d", &n);

    /*  A lógica desse exercicio esta em subtrair o resto da divisão por o resto da divisão do numero da casa anterior...
        por exemplo, para o numero 3214, voce subtrai o numero 4 que representa a unidade do numero 1 que representa a dezena...
        Fazendo isso a dezena ficara com 10. Apos ter o numero 10 voce divide por 10 para transforma-lo em unidade. */
    s = ((n % 1000000 - n  % 100000) / 100000) + ((n % 100000 - n  % 10000) / 10000) + ((n % 10000 - n  % 1000) / 1000) + ((n % 1000 - n % 100) / 100) + ((n % 100 - n % 10) / 10) + n % 10;
    printf("S: %d\n", s);

    // Calculando o digito verificador
    r = s % 10;

    // Exibindo o verificador para o usuário
    printf("Digito verificador: %d\n", r);
    
    // Exibindo o numero da conta no formato correto incluindo o digito verificador.
    printf("O numero da sua conta eh: %06d-%d", aux, r);

    return 0;
}