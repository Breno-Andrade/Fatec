#include <iostream>
#include <cmath>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int a = 0, b = 0, c = 0;
	float delta = 0, x1 = 0, x2 = 0;
	
	cout << "Este programa solicita tres valores e executa a equa�ao de segundo grau. \n\n";
	
	cout << "Insira o valor de A: ";
	cin >> a;
	cout << "Insira o valor de B: ";
	cin >> b;
	cout << "Insira o valor de C: ";
	cin >> c;

//	Calcula o valor de Delta.
	delta = (b * b) - (4 * a * c);
	
	if (delta > 0) {
		x1 = (-b + sqrt(delta)) / (2 * a);
		x2 = (-b - sqrt(delta)) / (2 * a);
		cout << "Existem duas raizes reias, X1: "<< x1 << " e X2: "<< x2;
	}
	else {
		if ( delta = 0) {
			x1 = (-b + sqrt(delta)) / (2 * a); 
			cout << "Existe uma raiz real, X1: " << x1;
		}
		else {
			cout << "Nao existe raiz real.";
		}
	}
	return 0;
}
