#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int a = 0, b = 0, c = 0, aux = 0;
	
	cout << "Este programa solicita tres valores de forma que ficaram salvas respectivamente em A, B e C.\nAo final do programa a variavel A contera o menor valor e a variavel C tera o maior.\n\n";
	
	cout << "Insira o valor de A: ";
	cin >> a;
	cout << "Insira o valor de B: ";
	cin >> b;
	cout << "Insira o valor de C: ";
	cin >> c;
	
	cout << "Os valores antes de passarem pelo organizador sao...";
	cout << "\nO valor de A: "<< a;
	cout << "\nO valor de B: "<< b;
	cout << "\nO valor de C: "<< c;	
	
	cout << "\n\n==== PROCESSANDO ====\n\n";
	if (a > c) {
		aux = a;
		a = c;
		c = aux;
	}
	if (a > b) {
		aux = a;
		a = b;
		b = aux;
	}
	if (b > c) {
		aux = c;
		c = b;
		b = aux;
	}
	cout << "Os valores apos passarem pelo organizador sao...";
	cout << "\nO valor de A: "<< a;
	cout << "\nO valor de B: "<< b;
	cout << "\nO valor de C: "<< c;
	return 0;
}
