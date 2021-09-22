#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv){
int num1 = 0, num2 = 0, soma = 0;

cout << "Digite dois numeros para saber o resultado da soma\n\n";
	
cout << "Digite o primeiro numero: ";
cin >> num1;
cout << "Digite o segundo numero: ";
cin >> num2;
	
soma = num1 + num2;

cout << "O resultado da soma eh: " << soma;	
	return 0;
}
