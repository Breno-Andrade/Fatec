#include <stdio.h>

int main(void){

    for(int c = 30; c <= 37 ; c++){
        printf("Cor: \033[%dm%d\033[m\n", c, c);
    }

    return 0;
}