#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
int num1 = 0, num2 = 0;

cout << "Este programa solicita dois numeros e os exibe.\n\n";

cout << "Digite um numero: ";
cin >> num1;
cout << "Digite outro numero: ";
cin >> num2;

cout << "\nO primeiro numero inserido eh: " <<num1<< "\nO segundo numero inserido eh: " <<num2 ;
	return 0;
}
