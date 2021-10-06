#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int n = 0, cont = 1, primo = 0;
	
	cout << "Mostra se o numero inserido eh primo ou nao.\n\n";
	
	while (n <= 1) {
		cout << "Insira o numero inteiro positivo: ";
		cin >> n;
	}
	
	while (n >= cont){
		if ((n % cont) == 0) {
			primo = primo + 1;
		}
		cont = cont + 1;
	}
	if (primo > 2) {
		cout << "\nO numero inserido nao eh primo.";
	}
	else {
		cout << "\nO numero inserido eh primo.";
	}
	return 0;
}
