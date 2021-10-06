#include <iostream>
#include <math.h>
 
using namespace std;
 
int main(){
    int numero = 0, binario = 0, expoente = 0;

    cout <<"Programa para converter em binario\n";
    cout <<"Insira um numero: ";
    cin >> numero;

    while(numero/2 != 0){
        binario += (numero%2)*(pow(10, expoente)); 
        expoente++;
        numero /= 2;
    }
    //Adiciona o último 1 na frente do número
    binario += (numero%2)*(pow(10, expoente)); 

    cout <<"Binario : " <<binario <<endl;

    return 0;
}
