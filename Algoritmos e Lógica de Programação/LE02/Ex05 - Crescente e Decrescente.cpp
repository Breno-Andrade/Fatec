#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int num1 = 0, num2 = 0;
	
	cout << "Este programa solicita dois valores e os exibe em ordem crescente e decrescente\n\n";
	
	cout << "Insira o primeiro valor: ";
	cin >> num1;
	cout << "Insira o segundo valor: ";
	cin >> num2;
	
	if (num1 != num2) {
		if(num1 > num2) {
		
			cout << "Ordem crescente: " << num2 << ", " << num1;
			cout << "\nOrdem decrescente: " << num1 << ", " << num2;
		}
		else {
			cout << "\nOrdem crescente: " << num1 << ", " << num2;
			cout << "\nOrdem decrescente: " << num2 << ", " << num1; 
		}
	}
	else {
		cout << "\nOs valores sao iguais e por esse motivo nao eh possivel coloca-los em ordem.";
	}
	return 0;
}
