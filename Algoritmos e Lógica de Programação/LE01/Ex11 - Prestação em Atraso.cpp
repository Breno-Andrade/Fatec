#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	float prestacao = 0, valor = 0, taxa = 0;
	int tempo = 0;
	
	cout << "Este programa calcula o valor a ser pago de uma prestacao em atraso\n\n";

	cout << "Insira o valor inicial da prestacao: ";
	cin >> valor;
	cout << "Insira a porcentagem da multa: ";
	cin >> taxa;
	cout << "Insira o tempo de atraso: ";
	cin >> tempo;
	
	prestacao = valor + (valor * (taxa / 100)* tempo);
	
	cout << "O valor a ser pago considerando a multa eh de: "<<prestacao;	
	return 0;
}
