#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	float dolar = 0, real = 0, cota = 0;
	
	cout << "Este programa faz a conversao do dolar para real com base na cotacao inserida pelo usuario.\n\n";
	
	cout << "Insira a cotacao do dolar atual: ";
	cin >> cota;
	cout << "Insira a quantidade de dolares que deseja converter para real: ";
	cin >> dolar;
	
	real = dolar * cota;
	
	cout << "O valor corvertido em reais eh de: "<<real;	
	return 0;
}
