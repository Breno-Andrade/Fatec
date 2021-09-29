#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {	
	int num1 = 0, aux = 0;
	
	cout << "Este programa recebe um numero inteiro e exibe esse numero ao quadrado.";
		
	cout << "Digite um numero inteiro: ";
	cin >> num1;
		
	aux = num1 * num1;
		
	cout << "O numero " <<num1<< " ao quadrado eh: "<<aux;	
	
	return 0;
}
