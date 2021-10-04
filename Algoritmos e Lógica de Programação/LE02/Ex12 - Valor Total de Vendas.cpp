#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	float quant = 0, total = 0;
	int cod = 0;
	
	cout << "calcula o valor total de vendas de um produto\n\n";
	
	cout << "Insira o codigo do produto: ";
	cin >> cod;
	cout << "Insira a quantidade vendida: ";
	cin >> quant;
	
	if (cod == 1) {
		total = quant * 32.00;
		cout << "Total vendido: " << total;
	}
	if (cod == 2) {
		total = quant * 45.00;
		cout << "Total vendido: " << total;
	}
	if (cod == 3) {
		total = quant * 37.00;
		cout << "Total vendido: " << total;
	}
	if (cod == 4) {
		total = quant * 33.00;
		cout << "Total vendido: " << total;
	}
	return 0;
}
