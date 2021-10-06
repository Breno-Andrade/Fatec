#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int cont = 1000, aux = 0;
	
	cout << "Exibe os valores entre 1000 e 1999 que ao serem dividos por 11 tem resto 5.";
	
	cout << "\n\nValor com resto 5: ";
	while (cont <= 1999) {
		if (cont % 11 == 5) {
			cout << cont << "\n";
		}
		cont = cont + 1;
	}
	return 0;
}
