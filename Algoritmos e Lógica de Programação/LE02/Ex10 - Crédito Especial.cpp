#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	float sm = 0, ce = 0;
	
	cout << "Este programa exibe o credito especial de acordo com o saldo medio do cliente.\n\n";
	
	cout << "Insira o saldo medio: ";
	cin >> sm;
	
	if (sm <= 200) {
		ce = (sm * 0) / 100;
	}
	else {
		if (sm <= 400) {
			ce = (sm * 20) / 100;
		}
		else {
			if (sm <= 600) {
				ce = (sm * 30) / 100;
			}
			else {
				ce = (sm * 40) / 100;
			}
		}
	}
	
	cout << "\nO saldo medio eh R$: " << sm;
	cout << "\nO credito especial eh R$: " << ce;
	
	return 0;
}
