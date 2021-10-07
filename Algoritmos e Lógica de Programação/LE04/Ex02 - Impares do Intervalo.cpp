#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int cont = 11, soma = 0;
	
	cout << "Mostra os impares de 10 a 80.\n\n";
	
	cout << "Usando Enquanto(While): ";
	while (cont <= 80) {
		cout << cont << " ";
		soma = soma + cont;	
		cont = cont + 2;	
	}
	cout << "\nO resultado da soma desses impares eh: " << soma;
	cont = 11;	// resetando as variaveis.
	soma = 0;	
	
	cout << "\n\nUsando Repita(Do While): ";
	do {
		cout << cont << " ";
		soma = soma + cont;
		cont = cont + 2;
	} while (cont <= 80);
	cout << "\nO resultado da soma desses impares eh: " << soma;
	cont = 11;	// resetando as variaveis.
	soma = 0;
	
	cout << "\n\nUsando Para(For): ";
	for (int cont = 11; cont <= 80; cont = cont + 2){
		cout << cont << " ";
		soma = soma + cont;
	}
	cout << "\nO resultado da soma dos desses impares eh: " << soma;
	
	return 0;
}
