#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int val1 = 0, val2 = 0, tot = 0;
	
	cout << "Exibe o resultado da multiplicacao de dois valores negativos.\n\n";
	
	while (val1 >= 0) {
		cout << "Insira um valor inteiro negativo: ";
		cin >> val1;
	}
	while (val2 >= 0) {
		cout << "Insira outro valor inteiro e negativo: ";
		cin >> val2;
	}
	
	tot = val1 * val2;
	
	cout << "O resulto da multiplicacao de " << val1 << " com " << val2 << " eh: " << tot;
	return 0;
}
