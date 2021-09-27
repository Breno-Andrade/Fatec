#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int num1 = 0, num2 = 0, mult = 0;
	
	cout << "Este programa recebe dois valores e exibe a multiplica�ao\n";
	cout << "Insira um numero inteiro: ";
	cin >> num1;
	cout << "Insira outro numero inteiro: ";
	cin >> num2;
	
	mult = num1 * num2;
	
	cout << "O resultado da multiplicacao eh: " << mult;
	
	return 0;
}
