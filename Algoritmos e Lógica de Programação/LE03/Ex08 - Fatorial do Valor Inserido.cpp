#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int n = 0, fat = 1, i = 1;
	
	cout << "Exibe o fatorial do numero inserido.\n\n";
	
	while (n <= 0) {
		cout << "Insira o valor inteiro positivo: ";
		cin >> n;
	}
	
	while (i <= n) {
		fat = fat * i;
		i++;	}
	cout << "\nResultado do fatorial de " << n <<" eh : " << fat;
	
	return 0;
}
