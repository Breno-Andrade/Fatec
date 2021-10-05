#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int cont = 1;
	
	cout << "Mostra os impares entre 0 e 100.\n\n";
	
	cout << "Os impares sao:";
	
	while (cont <=100) {
		cout << " " << cont;
		cont = cont + 2;
	}
	return 0;
}
