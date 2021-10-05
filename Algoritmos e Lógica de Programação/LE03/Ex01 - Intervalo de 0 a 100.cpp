#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int cont = 0;
	
	cout << "mostra o intervalo de 0 a 100\n\n";
	
	cout << "Os intervalos sao:";
	while (cont <= 100) {
		cout << " " << cont;
		cont = cont + 1;
	}
	return 0;
}
