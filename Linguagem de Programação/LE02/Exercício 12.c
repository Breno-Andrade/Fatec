#include <stdio.h>

int main(void){
    int dia = 0, mes = 0, ano = 0, num1 = 0, num2 = 0, opcao = 0;
    
    // Instrução para o usuário de como utilizar o programa da forma correta
    printf("Os dados devem ser inseridos no formato do exemplo a seguir. EX: 19/09/2021\n");
    
    // Entrada de dados
    printf("Digite a data: ");
    scanf("%d/%d/%d", &dia, &mes, &ano);
    
    // Exibindo para o usuário os dados informados
    printf("Data inserida: %d/%d/%d\n", dia, mes, ano);
    
    /* Multiplicar dia por 100 para adicionar duas casas decimais e somar com mes, apos isso...
    somar o resultado com o ano e atribuir a num1. */
    num1 = (dia * 100 + mes) + ano;
    
    /* dividir num1 por 100 para eliminar as casas decimais de unidade e dezena, apos isso...
    fazer o resto da divisão de num1 por 100 para eliminar as casas de centena e milhar, por fim...
    somar os dois resultados anteriores e atribuir a num2 */
    num2 = (num1 / 100) + (num1 % 100);
    
    // Adicionando, à opção, o resultado do resto da div de num2 por 5. O resultado sera o digito de verificação.
    opcao = num2 % 5;
    
    // Verificando a opção e exibindo a resposta para o usuário
    printf("Seu perfil eh: ");
    switch(opcao) {
        case 0: printf("Timido"); break;
        case 1: printf("Sonhador"); break;
        case 2: printf("Paquerador"); break;
        case 3: printf("Atraente"); break;
        case 4: printf("Irresistivel"); break;
        default: printf("Desconhecido"); break;
    }
    return 0;
}