#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	float x = 0, b = 0, a = 0;
	
	cout << "Este programa solicita a base e a altura, apos isso exibe o valor da area do triangulo.\n\n";
	
	cout << "Insira o valor da base: ";
	cin >> b;
	cout << "Insira o valor da altura: ";
	cin >> a;
	
	if (a > 0 && b > 0) {
		x = (a * b) / 2;
		
		cout << "\nCom base nos valores inseridos\n";
		cout << "O valor da area eh: " << x;
		
	}
	else {
		cout << "Os valores devem ser positivos e maiores que zero.";
	}
	return 0;
}
