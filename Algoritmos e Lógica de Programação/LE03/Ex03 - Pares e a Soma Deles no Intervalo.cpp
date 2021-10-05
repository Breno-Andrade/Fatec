#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int cont = 12, soma = 0;
	
	cout << "Exibe os pares entre 10 e 100, e a somatoria deles.\n\n";
	
	cout << "Os pares sao:";
	
	while (cont <= 98) {
		cout << " " << cont;
		cont = cont + 2;
		soma = soma + cont;
	}

	cout << "\n\nA somatoria eh: " << soma;
	return 0;
}
