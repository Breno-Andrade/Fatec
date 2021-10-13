#include <stdio.h>

int main(void){
    float n1 = 0, n2 = 0, m = 0;
    
    printf("Digite a primeira notas: ");
    scanf("%f", &n1);
    printf("Digite a segunda nota: ");
    scanf("%f", &n2); 
    
    m = (n1 + n2)/ 2;
    
    if(m >= 6){
        printf("\nAprovado!!");
    } else{
        printf("\nReprovado!!");
    }
    return 0;
}