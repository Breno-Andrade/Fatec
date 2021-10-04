#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int quant = 0;
	float val = 0;
	
	cout << "Calcula o valor total de vendas das macas.\n\n";
	
	cout << "Insira a quantidade de macas: ";
	cin >> quant;
	
	if (quant >= 12) {
		val = quant * 1.00;
		cout << "Valor total: R$"<< val;
	}
	else {
		val = quant * 1.30;
		cout << "Valor total: R$"<< val;
	}
	return 0;
}
