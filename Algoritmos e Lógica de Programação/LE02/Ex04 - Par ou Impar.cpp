#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int num = 0;
	
	cout << "Este programa solicita um valor e exibe se o mesmo eh impar ou par.";
	
	cout << "\n\nInsira um valor inteiro maior que zero: ";
	cin >> num; 
	
	if (num > 0){
		if (num % 2 == 0){
			cout << "\nO valor inserido eh par";
		}
		else{
			cout << "\nO valor inserido eh impar";
		}
	}
	else{
		cout << "\nO valor inserido deve ser inteiro e maior que 0, reinicie o programa e tente novamente";
	}
 return 0;
}
