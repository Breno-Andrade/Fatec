#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int cont = 0, val = 0, di = 0, fi = 0;
	
	cout << "Solicita 10 valores e mostra quantos estao entre 10 e 20.\n\n";
	
//	cout << "Insira o primeiro valor"
	
	while (cont <= 9) {
		cout << "Insira o valor: ";
		cin >> val;
		
		if (val > 10 && val < 20) {
			di = di + 1;
		}
		else {
			fi = fi + 1;
		}
		cont = cont + 1;
	}
	
	cout << "\nNumeros dentro do intervalo: " << di;
	cout << "\nNumeros fora do intervalo: " << fi;
	return 0;
}
