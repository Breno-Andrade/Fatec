#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int n = 0, cont = 0;
	
	cout << "Faz a transformação da base decimal para base binaria.\n\n";
	
	do {
		cout << "Insira um valor inteiro positivo: ";
		cin >> n;
	} while (n <= 0);
	

	return 0;
}
