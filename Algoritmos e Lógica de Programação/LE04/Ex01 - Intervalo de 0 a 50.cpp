#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int cont = 1;	
	cout << "Mostra os intervalos de 1 a 50.\n\n";
	
	cout << "Usando enquanto(While): ";
	while (cont <= 50) {
		cout << cont << " ";
		cont = cont + 1;
	}
	cont = 1;
	
	cout << "\n\nUsando repita(Do While): ";
	do {
		cout << cont << " ";
		cont = cont + 1;	
	} 
	while (cont <= 50);
	
	cout << "\n\nUsando para(For): ";
	for (int cont = 1; cont <= 50; cont = cont + 1){
		cout << cont << " ";
	}
	return 0;
}
